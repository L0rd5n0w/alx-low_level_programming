#include "main.h"
/**
 *swap_int -code to check
 *Return:(0)Always
 *@a: parameter
 *@b: parameter
 */
void swap_int(int *a, int *b)
{
	int mirror = *a;

	*a = *b;
	*b = mirror;	
}
