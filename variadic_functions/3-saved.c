#include "variadic_functions.h"

/**
 * print_all - prints all arguments of types char, int, float, string
 * @format: pointer to string specifying types or args
 * Return:
 */
void print_all(const char * const format, ...)
{
	unsigned int i_h;
	int i_format = 0;
	char *str;
	format_t h[] = {
		{"c", "%c"},
		{"i", "%d"},
		{"f", "%f"},
		{"s", "%s"},
		{NULL, NULL}
	};

      	va_list list;

	printf("%s", format);
	va_start(list, format);
	printf("Loop start\n");
	printf("Format is %s\n", format);
	while (i_format < 4)
	{
		printf("pop");
		i_h = 0;
		str = va_arg(list, char*);
		while (h[i_h].type[0] != format[i_format] && h[i_h].type != NULL)
		{
			i_h++;
		}
		if (h[i_h].type != NULL)
			printf(h[i_h].print_arg, str);
		if (str == NULL)
			printf("(nil)");
		printf(", ");
		i_format++;
	}
	va_end(list);
	printf("\n");
}
