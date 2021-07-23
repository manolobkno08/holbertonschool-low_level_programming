#ifndef STRUCT_DOG_H
#define STRUCT_DOG_H

#include <stdio.h>
#include <stdlib.h>

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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif