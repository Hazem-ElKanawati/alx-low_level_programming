#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(*p));
	if (p == NULL)
		return (NULL);
	p->name = malloc(sizeof(*(p->name)));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->owner = malloc(sizeof(*(p->owner)));
	if (p->owner == NULL)
	{
		free (p);
		return (NULL);
	}
	p->name = name;
	p->owner = owner;
	p->age = age;
	return (p);
}
