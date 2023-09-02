#include <stdio.h>
/**
 *main -function
 *Return(0)Always
 *@argv : parameter
 *@argc: parameter
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argc;
	for (i = 0;, i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
