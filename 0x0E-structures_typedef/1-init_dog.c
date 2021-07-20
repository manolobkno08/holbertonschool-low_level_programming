#include <stdio.h>
#include "dog.h"


/**
 * init_dog - funcion que inicializa datos
 *@d: asigna alias a la funcion dog
 *@name: char name
 *@age: float edad
 *@owner: char propietario
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
