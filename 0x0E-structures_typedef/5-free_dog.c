#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that frees dogs.
 * @d: struct
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->name);
	free(d);
}
