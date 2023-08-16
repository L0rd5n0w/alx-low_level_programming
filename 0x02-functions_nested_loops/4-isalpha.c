#include "main.h"
/**
 *_isalpha -code to check
 *Return (0): Always
 *_islower -code to check
 *Return: (0) Always
 *@c: parameter
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
