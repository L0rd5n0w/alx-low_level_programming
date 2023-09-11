#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *init_dog -function
 *Return:(0)Always
 *struct dog - parameter
 *d: parameter
 *@name: parameter
 *@age: parameter
 *@owner: parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
