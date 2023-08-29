#include "main.h"
#include <stdio.h>
/**
 *print_diagsums -function
 *Return:(0)Always
 *@a: parameter
 *@size: parameter
 */
void print_diagsums(int *a, int size)
{
	int line = 0;
	int grid = 0;
	int y;

	for (y = 0; y < size; y++)
	{
		line += *(a + y * size + y);
		grid += *(a + y * size + (size -y - 1));
	}
	printf("%d, %d", line, grid);
	printf("\n");
}
