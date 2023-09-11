#include "dog.h"
#include <stdlib.h>
/**
 *free_dog -function
 *@d: parameter
 *Return:(0)Always
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
