#include "main.h"
/**
 *print_sign -Code to check
 *@n: parameter to check
 *Return: (0) Always
 */
int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	else if (n < '0')
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
