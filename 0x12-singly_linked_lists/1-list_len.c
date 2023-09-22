#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * list_len -function
 * @h: parameter
 * Return:(0)Always
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		const list_t *new = NULL;

		new = h;

			while (new != NULL)
			{
				new = new->next;
				count++;
			}
	}
	return (count);
}
