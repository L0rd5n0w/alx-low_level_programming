#include "main.h"
/**
 *reverse_array - function to reverse an array
 *Return:(0)Always
 *@a: parameter
 *@n: parameter
 */
void reverse_array(int *a, int n)
{
	int e;
	int q;

	for (e = 0; e < n-- ; e++)
	{
		q = a[e];
		a[e] = a[n];
		a[n] = q;
	}
}
