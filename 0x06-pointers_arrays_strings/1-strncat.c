#include "main.h"
/**
 *_strncat - function for binding with respect to n
 *Return:(0)Always
 *@dest: parameter
 *@src: parameter
 *@n: parameter
 */
char *_strncat(char *dest, char *src, int n)
{
	char *output = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (output);
}
