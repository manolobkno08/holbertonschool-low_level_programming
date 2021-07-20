#include "dog.h"
/**
 * new_dog - funcion que inicializa datos
 *@name: puntero char dentro de estructura
 *@age: variable dentro de estructura
 *@owner: puntero char dentro de estructura
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *perrito = NULL;

	int leni, lenj;

	int i, j;

	if (name == NULL || owner == NULL)
		return (NULL);

	perrito = malloc(sizeof(dog_t));
	if (perrito == NULL)
		return (NULL);

	/* NAME */
	for (i = 0; name[i]; i++)
		;
	leni = i + 1;

	perrito->name = malloc(sizeof(char) * leni);
	if (perrito->name == NULL)
	{
		free(perrito);
		return (NULL);
	}
	/* llenar NAME */
	for (i = 0; i < leni; i++)
		perrito->name[i] = name[i];

	/* llenando AGE */
	perrito->age = age;

	/* OWNER */
	for (j = 0; owner[j]; j++)
		;
	lenj = j + 1;

	perrito->owner = malloc(sizeof(char) * lenj);
	if (perrito->owner == NULL)
	{
		free(name);
		free(perrito);
		return (NULL);
	}
	/* llenar OWNER */
	for (j = 0; j < lenj; j++)
		perrito->owner[j] = owner[j];

	return (perrito);

}
