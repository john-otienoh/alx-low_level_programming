#include "dog.h"
#include <stdio.h>
/**
 * print_dog - A function that prints struct dog
 * @d: A struct dog
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL /*|| d->age == NULL */|| d->owner == NULL)
	{
		printf("(nil)");
	}
	if (d->name == NULL)
	{
		printf("NULL");
	}
	if (d == NULL)
	{

	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
