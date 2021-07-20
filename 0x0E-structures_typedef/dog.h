#ifndef STRUCT_DOG_H
#define STRUCT_DOG_H

/**
 * struct dog - funcion que contiene struct
 *@name: char name
 *@age: float edad
 *@owner: char propietario
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
