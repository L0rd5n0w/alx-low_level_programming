#include "main.h"
#include <math.h>
/**
 *_pow_recursion -function
 *Return:(0)Always
 *@x: parameter
 *@y: parameter
 */
int _pow_recursion(int x, int y)
{
	int power = 0;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		power = x *  _pow_recursion(x, y - 1);
	}
	return (power);
}
