#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * @n: decimal number to be converted to integer
 */
void print_binary(unsigned long int n)
{
	unsigned int i, j;

	j = 1 << 31;
	for (i = 1; i <= 32; ++i)
	{
		_putchar(n & j ? '1' : '0');
		n <<= 1;
	}
}
