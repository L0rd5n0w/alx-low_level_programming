#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc -function
 * @nmemb: parameter
 * @size: parameter
 * Return:(0)Always
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *intake;

	if (nmemb == 0 || size == 0)
		return (NULL);
	intake = calloc(nmemb, size);
	if (intake == NULL)
		return (NULL);
	else
		return (intake);
}
