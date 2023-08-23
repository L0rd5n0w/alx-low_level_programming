#include "main.h"
/**
 *_strcmp - function to
 *Return:(0)Always
 *@s1: parameter
 *@s2: parameter
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return ((*s1 < *s2) ? -15 : 15);
		}
		else if (*s1 > *s2)
		{
			return (1);
		}
		s1++;
		s2++;
	}
	return (0);
}
