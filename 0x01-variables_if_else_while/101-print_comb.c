#include <stdio.h>
#include <stdlib.h>
/**
 *main -code that prints out all three possible combinations
 *Return:(0) Always
 */
int main(void)
{
	int o, p;

	for (o = 0; o <= 9; o++)
	{
		for (p = o + 1; p <= 9; p++)
		{
			if (o == p)
				continue;
			putchar(o + '0');
			putchar(p + '0');
			if (o == 8 && p == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
