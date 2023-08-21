#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int q = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; q < l ; q++)
	{
		dest[q] = src[q];
	}
	dest[l] = '\0';
	return (dest);
}
