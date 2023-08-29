#include "main.h"
/**
 *_memcpy -function
 *Return:(0)Always
 *@dest: parameter
 *@src: parameter
 *@n: parameter
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
