#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all -function
 * @format: parameter
 * Return:(0)Always
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *trend = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", trend, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", trend, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", trend, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", trend, str);
					break;
				default:
					i++;
					continue;
			}
			trend = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
