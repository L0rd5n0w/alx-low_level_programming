#include "main.h"
/**
 *factorial -function
 *Return:(0)Always
 *@n: parameter
 */
int factorial(int n)
{
	int fact = 1;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		fact = n * factorial(n - 1);
		return (fact);
	}
}
