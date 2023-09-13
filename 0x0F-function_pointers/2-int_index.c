#include "functions_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *int_index -function
 *@array: parameter
 *@size: parameter
 *@cmp: parameter
 *Return:(0)Always
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int u;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (u = 0; u < size; u++)
	{
		if (cmp(array[u]))
		{
			return (u);
		}
	}
	return (-1);
}
