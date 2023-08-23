#include "main.h"
/**
 *_strncpy - function to copy in relation to n
 *Return:(0)Always
 *@dest: parameter
 *@src: parameter
 *@n: parameter
 */
char *_strncpy(char *dest, char *src, int n)
{
	int q;

	for (q = 0; q < n && src[q] != '\0'; ++q)
	{
		dest[q] = src[q];
	}
	for (; q < n; ++q)
	{
		dest[q] = '\0';
	}
	return (dest);
}
