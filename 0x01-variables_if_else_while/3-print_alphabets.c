#include <stdio.h>
#include <stdlib.h>

/**
 *main -code to display alphabets
 *Return:(0)Always
 */
int main(void)
{
	int i;

	i = 0;

	int q;

	q = 0;

	while (i < 26)
	{
		putchar('a' + i);
		i++;
	}
	while (q < 26)
	{
		putchar('A' + q);
		q++;
	}
	putchar('\n');
	return (0);
}
