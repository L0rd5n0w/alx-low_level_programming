#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list -function
 * @h: parameter
 * Return:(0)Always
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		const list_t *new = NULL;

		new = malloc(sizeof(list_t));
			new = h;

			while (new != NULL)
			{
				if (new->str != NULL)
				{
					printf("[%i] %s\n", new->len, new->str);
				}
				else
				{
					printf("[0] (nil)\n");
				}
				new = new->next;
				count++;
			}
	}
	return (count);
}
