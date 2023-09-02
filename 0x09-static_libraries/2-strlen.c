#include "main.h"
/**
 *_strlen -code to check
 *Return:(0)Always
 *@s: parameter
 */
int _strlen(char *s)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		ptr++;
	}
	return (ptr - s);
}
