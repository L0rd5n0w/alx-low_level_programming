#include <stdio.h>
#include <stdlib.h>
/**
 *main -code to reverse things
 *Return:(0) Always
 */

int main(void)
{
	char r;

	for (r = 'z'; r >= 'a'; r--)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}
