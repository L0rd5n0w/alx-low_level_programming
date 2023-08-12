#include <stdio.h>
#include <stdlib.h>
/**
 *main -code to print alphabets with q and e missing
 *Return:(0)Always
 */
int main(void)
{
	char i;

	char index_skipping1 = 'e';
	char index_skipping2 = 'q';

	for (i = 'a'; i <= 'z'; i++)
	{
		if
		(i != index_skipping1 && i != index_skipping2)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
