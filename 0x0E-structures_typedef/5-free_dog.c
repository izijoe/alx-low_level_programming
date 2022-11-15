#include <stdlib.h>
#include "dog.h"


/**
 * free_dog - frees dogs
 * @d: pointerto dog to free
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(->owner);
		free(d);
	}
}
