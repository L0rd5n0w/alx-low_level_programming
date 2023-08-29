#include "main.h"
#include <stdio.h>
/**
 *_strchr -function
 *Return:(0)Always
 *@s: parameter
 *@c: parameter
 *
 */
char *_strchr(char *s, char c)
{
        while (*s != '\0')
        {
                if (*s == c)
                {
                        return (s);
                }
                s++;
        }
        if (*s == c)
        {
                return (s);
        }
        return (NULL);
}


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
