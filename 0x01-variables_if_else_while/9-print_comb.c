#include <stdio.h>
#include <stdlib.h>
/**
 *main -code to print comb
 *Return: (0) Always
 */
int main(void)
{
	int kl;

	for (kl = 48; kl < 58; kl++)
	{
		putchar(kl);
		if (kl < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
