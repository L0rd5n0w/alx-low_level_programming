#include "main.h"
/**
 *leet  - conversion to 7331
 *Return:(0)Always
 *@str: parameter
 */
char *leet(char *str)
{
	int i;
	char leet_[256] = {0};

	leet_['a'] = '4';
	leet_['A'] = '4';
	leet_['e'] = '3';
	leet_['E'] = '3';
	leet_['o'] = '0';
	leet_['O'] = '0';
	leet_['t'] = '7';
	leet_['T'] = '7';
	leet_['l'] = '1';
	leet_['L'] = '1';

	for (i = 0; str[i] != '\0'; i++)
	{
		if (leet_[(unsigned char) str[i]])
		{
			str[i] = leet_[(unsigned char) str[i]];
		}
	}

	return (str);
}
