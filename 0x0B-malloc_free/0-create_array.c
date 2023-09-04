#include "main.h"
#include <stdlib.h>
/**
 *create_array -function
 *Return:(0)Always
 *@size: parameter
 *@c: parameter
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *q;

	if (size == 0)
	{
		return (NULL);
	}
	q = malloc(size * sizeof(char));
	if (q == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		q[i] = c;
	}
	return (q);
}
