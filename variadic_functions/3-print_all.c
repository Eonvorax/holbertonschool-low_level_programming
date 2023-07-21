#include "variadic_functions.h"

/**
 * print_all - prints all arguments of types char, int, float, string
 * @format: pointer to string specifying types or args
 * Return:
 */
void print_all(const char * const format, ...)
{
	int i_f = 0;
	char *str;
	char *sep = "";
	va_list list;

	va_start(list, format);
	while (format && format[i_f])
	{
		switch (format[i_f])
		{
		case 'c':
			printf("%s%c", sep, va_arg(list, int));
			break;
		case 'i':
			printf("%s%d", sep, va_arg(list, int));
			break;
		case 'f':
			printf("%s%f", sep, va_arg(list, double));
			break;
		case 's':
			str = va_arg(list, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", sep, str);
			break;
		default:
			i_f++;
			continue;
		}
		sep = ", ";
		i_f++;
	}
	va_end(list);
	printf("\n");
}
