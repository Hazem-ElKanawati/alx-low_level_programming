#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints info about a dog
 * @d: pointer to the struct of the dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s", d->name);
	printf("Age: %f", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s", d->owner);
}
