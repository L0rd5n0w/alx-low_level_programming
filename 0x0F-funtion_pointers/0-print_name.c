#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_name -function
 *Return:(0)Always
 *@name: parameter
 *@f: parameter
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
