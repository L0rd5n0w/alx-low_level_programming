#include <stdio.h>
#include <stdlib.h>
/**
 *main -code to reverse things
 *Return:(0) Always
 */

int main(void)
{
	char r;
	int w;

	for (w = '0'; w <= '9'; w++)
	{
		putchar(w);
	}
	for (r = 'a'; r <= 'f'; r++)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}
