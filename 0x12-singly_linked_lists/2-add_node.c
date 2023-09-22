#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - parameter
 * @head: parameter
 * @str: parameter
 * Return:(0)Always
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *theleast = NULL;

	theleast = malloc(sizeof(list_t));

	if (theleast != NULL)
	{
		theleast->str = strdup(str);
		theleast->len = strlen(str);
		theleast->next = (*head);
		(*head) = theleast;
		return (theleast);
	}
	else
	{
		return (NULL);
	}
}
