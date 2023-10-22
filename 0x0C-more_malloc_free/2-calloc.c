#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: Number of elements
 * @size: size of the elements in byte(s)
 * Return: NULL if size or nmemb == 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	p = calloc(nmemb, size);
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		return (p);
	}
}
