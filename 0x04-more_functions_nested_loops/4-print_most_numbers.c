#include "main.h"
/**
 *print_most_numbers -code to check
 *Return:(0)Always
 *
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c != 2 || c != 4)
		{
			_putchar(c);
		}
	}
	_putchar('\n')
}