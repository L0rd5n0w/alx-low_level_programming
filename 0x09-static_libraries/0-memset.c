#include "main.h"
/**
 *_memset - function
 *Return:(0)Always
 *@s: parameter
 *@n: parameter
 *@b: parameter
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int q;

	for (q = 0; q < n; q++)
	{
		s[q] = b;
	}
	return (s);
}
