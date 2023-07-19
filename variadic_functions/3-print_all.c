#include "variadic_functions.h"

/**
 * print_all - prints all arguments of types char, int, float, string
 * @format: pointer to string specifying types or args
 * Return:
 */
void print_all(const char * const format, ...)
{
	unsigned int i_format, i_h, i_arg, count;
	va_list args;
	char *str;
	typedef struct hash
	{
		char *type;
		char *print_arg;
	} format_t;
	format_t h[] = {
		{"c", "%c"},
		{"i", "%d"},
		{"f", "%f"},
		{"s", "%s"},
		{NULL, NULL}
	};

	count = 0;
	va_start(args, count);
	i_format = 0;
	while (format[i_format] != '\0')
	{
		i_h = 0;
		str = arg(args, char*);
		while (h[i_h].type != format[i_format] && h[i_h].type != NULL)
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
	printf("\n");
}
