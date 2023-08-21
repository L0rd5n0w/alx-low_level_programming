#include <stdio.h>
#include "main.h"
/**
 *print_rev -code to reverse with new line
 *Return:(0)always
 *@s: parameter
 */
void print_rev(char *s)
{
	if (*s != '\0')
	{
		print_rev(s + 1);
		_putchar(*s);
	}
}
