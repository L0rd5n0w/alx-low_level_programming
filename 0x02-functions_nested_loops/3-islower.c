#include <unistd.h>
#include "main.h"
/**
 *_islower -code to check lower case
 *Return: (0) Always
 *@c: parameter to check
 *Return (0): Always
 */
int _islower(int c)
{
	if (c <= 'a' && c >= 'z')
		return (1);
	else
		return (0);
}
