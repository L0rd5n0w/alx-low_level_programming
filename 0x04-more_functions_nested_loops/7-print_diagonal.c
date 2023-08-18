#include "main.h"
/**
 *print_diagonal -code to check
 *Return void
 *@n: parameter
 */
void print_diagonal(int n)
{
	int c;
	int t;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (c = 0; c <= n; c++)
		{
			_putchar('\\');
			_putchar('\n');
			for (t = 1; t <= c; t++)
				_putchar(' ');
		}
	}
}
