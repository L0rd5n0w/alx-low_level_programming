#include <stdio.h>
#include <stdlib.h>
/**
 *main -code to print all possible combination of two two-digits
 *Return:(0) Always
 */
int main(void)
{
	int io, jo, ko;

	for (io = 0; io <= 9; io++)
	{
		for (jo = io + 1; jo <= 9; jo++)
		{
			for (ko = jo + 1; ko <= 9; ko++)
			{
				if (io == jo || jo == ko || io == ko)
				{
					continue;
				}
				putchar(io + '0');
				putchar(jo + '0');
				putchar(ko + '0');
				if (io == 7 && jo == 8 && ko == 9)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
