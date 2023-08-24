#include "main.h"
/**
 **string_toupper -function to change string to upper
 *Return:(0)Always
 *@s: parameter
 */
char *string_toupper(char *s)
{
	char *rt = s;

	while (*rt != '\0')
	{
		if (*rt >= 'a' && *rt <= 'z')
		{
			*rt = *rt - ('a' - 'A');
		}
		rt++;
	}
	return (s);
}
