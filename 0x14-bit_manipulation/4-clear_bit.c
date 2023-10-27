#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index.
* @n: number
* @index: index
* Return: change bit in index
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bin;

	bin = (sizeof(*(n)) * 8);
	if (index < bin)
	{
		*(n) = (~(1 << index) & *(n));
		return (1);
	}
	return (-1);
}
