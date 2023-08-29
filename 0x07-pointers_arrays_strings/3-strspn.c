#include "main.h"
#include <stdio.h>
/**
 *_strspn -function
 *Return:(0)Always
 *@s: parameter
 *@accept: parameter
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && _strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}
	return (count);
}
