#include "main.h"
/**
 *_puts_recursion -function
 *Return:(0)Always
 *@s: parameter
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
