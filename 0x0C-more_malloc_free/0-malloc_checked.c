#include "main.h"
#include <stdlib.h>
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
		return (98);
	}
	else
	{
		return (intake);
	}
}
