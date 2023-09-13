#include <stddef.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator -function
 *@array: parameter
 *@size: parameter
 *@action: parameter
 *Return:(0)Always
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
