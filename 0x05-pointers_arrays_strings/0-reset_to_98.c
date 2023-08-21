#include "main.h"
/**
 *reset_to_98 -code to check
 *Return:(0)Always
 *@n: parameter
 */
void reset_to_98(int *n)
{
	int *p = *&n;

	*p = 98;
}
