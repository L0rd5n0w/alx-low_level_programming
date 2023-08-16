#include "main.h"
/**
 *print_last_digit -code to check
 *Return: (0) Always
 *@r: parameter
 *
 */
int print_last_digit(int r)
{
	int q;

	q = r % 10;
	if (r < 0)
		q = -q
	_putchar(q + '0');
	return (q);
}
