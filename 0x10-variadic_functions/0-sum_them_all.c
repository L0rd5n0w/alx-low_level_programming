#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all -function
 *Return:(0)Always
 *@n: parameter
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int q;
	unsigned int total = 0;

	va_start(args, n);

	for (q = 0; q < n; q++)
	{
		total += va_arg(args, int);
	}

	va_end(args);

	return (total);
}
