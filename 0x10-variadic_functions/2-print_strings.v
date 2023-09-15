#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -function
 * @separator: parameter
 * @n: parameter
 * Return:(0)Always
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int hind;

	va_start(strings, n);

	for (hind = 0; hind < n; hind++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (hind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
