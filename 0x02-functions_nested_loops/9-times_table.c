#include "main.h"
#include <stdio.h>
/**
 * times_table -print 9 times table
 * Return: (0) Always
 */
void times_table(void)
{
	int o, p, output;

	for (o =  0 ; o < 10 ; o++)
	{
		for (p = 0 ; p < 10; p++)
		{
			output = o * p;
			if (p == 0)
				printf("%d, ", output);
			else
			{
				printf("%2d", output);
				if (p != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
