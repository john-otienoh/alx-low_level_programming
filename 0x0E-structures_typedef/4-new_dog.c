#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - functionthat creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner :dog's owner
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len_gth1 = strlen(name);
	int len_gth2 = strlen(owner);
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (len_gth1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len_gth2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	strcpy(dog->owner, owner);
	strcpy(dog->name, name);
	dog->age = age;
	return (dog);
}
