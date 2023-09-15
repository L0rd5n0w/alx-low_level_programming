#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -function
 * @separator: parameter
 * @n: parameter
 * Return:(0)Always
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int hind;

	va_start(num, n);

	for (hind = 0; hind < n; hind++)
	{
		printf("%d", va_arg(num, int));

		if (hind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(num);
}
