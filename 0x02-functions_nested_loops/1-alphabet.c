#include <unistd.h>
#include "main.h"
/**
 *print_alphabet -code to print alphabet
 *Return: (0) Always
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
