#include "main.h"
/**
 *leet  - conversion to 7331
 *Return:(0)Always
 *
 */

char *leet(char *str) 
{
	char *ptr = str;


	while (*ptr != '\0') 
	{
		char c = *ptr;

		if (c == 'a' || c == 'A')
		{
			*ptr = '4';
		}
		else if (c == 'e' || c == 'E')
		{
			*ptr = '3';
		}
		else if (c == 'o' || c == 'O')
		{
			*ptr = '0';
		}
		else if (c == 't' || c == 'T')
		{
			*ptr = '7';
		}
		else if (c == 'l' || c == 'L')
		{
			*ptr = '1';
		}
		ptr++;
	}
	return (str);
}