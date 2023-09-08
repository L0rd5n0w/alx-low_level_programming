#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *malloc_checked -function
 *Return:(0)Always
 *@b: parameter
 */
void *malloc_checked(unsigned int b)
{
	char *intake;

	intake = malloc(b);
	if (intake == NULL)
	{
		exit(98);
	}
	else
	{
		return (intake);
	}
}
