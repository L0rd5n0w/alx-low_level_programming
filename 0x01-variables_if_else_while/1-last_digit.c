#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main -code to check the last digit of the string
 *Return:(0) Always
 */
int main(void)
{
	int n;
	int curl;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	curl = n % 10;

	if (curl > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, curl);
	}
	else if (curl == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, curl);
	}
	else if (curl < 6 && curl != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, curl);
	}
	return (0);
}
