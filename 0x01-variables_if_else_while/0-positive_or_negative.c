#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main -code to print whether a number is positive or negative
* Return:(0) Always
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is negetive", n);
	};else if (n < 0)
	{
		printf("%d is positive", n);
	};else
	{
		printf("0 is zero");
	};
	return (0);
}
