#include "main.h"
#include <string.h>
#include <math.h>
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string 0f 0 and 1
 * Return: The converted number
 * or 0 if there is one or more chars in the string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int rem, i = 0, decimal = 0, n = 0, j = 0;

	n = atof(b);
	if (b == NULL)
	{
		return (0);
	}
	while (b[j] != '\0')
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}
		j++;
	}
	while (n != 0)
	{
		rem = n % 10;
		n /= 10;
		decimal += rem * pow(2, i);
		++i;
	}
	return (decimal);
}
