#include <stdio.h>
/**
 * main - main function
 * Return: (0)Always
 */
int main(void)
{
	int q;

	for (q = 1 ; q <= 100 ; q++)
	{
		if ((q % 3 == 0) && (q % 5 == 0))
			printf("%s", "FizzBuzz");
		else if (q % 3 == 0)
			printf("%s", "Fizz");
		else if (q % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d", q);
		if (q != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
