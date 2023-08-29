#include "main.h"
#include <stdio.h>
/**
 *_strstr -function
 *Return:(0)Always
 *@haystack: parameter
 *@needle: parameter
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
