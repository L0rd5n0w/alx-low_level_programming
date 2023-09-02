#include "main.h"
#include <stdio.h>
/**
 *_strpbrk -function
 *Return:(0)Always
 *@s: parameter
 *@accept: parameter
 *
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *q = accept;

		while (*q != '\0')
		{
			if (*s == *q)
			{
				return (s);
			}
			q++;
		}
		s++;
	}
	return (NULL);
}
