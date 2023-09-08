#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range -function
 * @min: parameter
 * @max: parameter
 * Return:(0)Always
 *
 */

int *array_range(int min, int max)
{
	int size;
	int i;
	int *intake;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	intake = malloc(sizeof(int) * size);
		if (intake == NULL)
			return (NULL);
	for (i = 0; min <= max; i++)
		intake[i] = min++;
	return (intake);
}
