#include <unistd.h>
#include "main.h"
/**
 *print_alphabet_x10 -code to print alphabet multiple times
 *Return: (0) Always
 */
void print_alphabet_x10(void)
{
	char i;
	int z;

	for (z = 0; z <= 9; z++)
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
}
