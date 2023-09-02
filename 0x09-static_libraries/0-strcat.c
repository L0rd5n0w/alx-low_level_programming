#include "main.h"
/**
 *_strcat -function to append
 *Return:(0)Always
 *@dest: parameter
 *@src: parameter
 */
char *_strcat(char *dest, char *src)
{
	char *output = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (output);
}
