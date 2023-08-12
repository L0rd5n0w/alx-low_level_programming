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

	while (i < 26)
	{
		putchar('a' + i);
		i++;
		
	}
	putchar('\n');
	return (0);
}
