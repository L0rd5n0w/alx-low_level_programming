#include "main.h"
#include <ctype.h>

/**
 *cap_string - Capitalizes all words of a string
 *@ret: char param
 *Return: 0
 */

char *cap_string(char *ret)
{
	int i;
	int ploy = 1;

	for (i = 0; ret[i] != '\0'; i++)
	{
	if (ploy && isalpha(ret[i]))
	{
	ret[i] = toupper(ret[i]);
	}

	ploy = 0;
	switch (ret[i])
	{
	case ' ':
	case '\t':
	case '\n':
	case ',':
	case ';':
	case '.':
	case '!':
	case '?':
	case '"':
	case '(':
	case ')':
	case '{':
	case '}':
	ploy = 1;
	break;
	default:
	break;
	}
	}

	return (ret);
}
