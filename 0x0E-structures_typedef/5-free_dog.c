#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - funcion que libera memoria
 *@d: parametro puntero d
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
	}
}
