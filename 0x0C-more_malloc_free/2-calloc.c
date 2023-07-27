#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc -  function allocates memory for an array of nmemb
 * b elements of size bytes each and returns a pointer to the allocated memory
 * @nmemb: number of array members
 * @size: size of array
 * @Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *point;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	point = calloc(nmemb, size);
	if (point == NULL)
	{
		return (NULL);
	}
	else
	{
		return (point);
	}
}
