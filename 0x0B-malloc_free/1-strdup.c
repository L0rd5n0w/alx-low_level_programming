#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_strdup -function
 *Return:(0)Always
 *@str: parameter
 */
char *_strdup(char *str)
{
	unsigned int lenght;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	lenght = strlen(str);
	new_str = (char *)malloc(lenght + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, str);

	return (new_str);
}
