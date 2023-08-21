#include "main.h"
/**
 *print_rev -code to reverse
 *Return:(0)always
 *@s: parameter
 */
void print_rev(char *s)
{
	int q = _strlen(s);

	for (int i = q - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
