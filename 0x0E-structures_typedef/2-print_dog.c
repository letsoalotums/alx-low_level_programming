#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function that prints struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == nul)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %s\nOwner: %s\n", d->age, d->owner);
}
