#include "main.h"
/**
 *_isdigit -code to check
 *Return:(0)Always
 *@c: parameter
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
