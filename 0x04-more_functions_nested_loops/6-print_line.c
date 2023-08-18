#include "main.h"
/**
 *print_line -code to print
 *Return:(0)Always
 *
 */
void print_line(int n)
{
	int c;

	for (c = 0; c <= n; c++)
	{
		if (n <= 0)
		{
			break;
		}
		_putchar('_');
	}
	_putchar('\n');
}
