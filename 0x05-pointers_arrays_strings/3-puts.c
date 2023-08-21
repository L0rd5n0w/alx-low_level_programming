#include "main.h"
/**
 *_puts -code to print
 *Return:(0)Always
 *@str: parameter
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
