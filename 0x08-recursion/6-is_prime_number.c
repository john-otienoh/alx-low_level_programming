#include "main.h"
/**
 * is_prime_number - Function that checks if a number is prime
 * @n: The number to be checked if it is prime
 * Return: 1 if the input integer is prime, otherwise return 0
 */
int is_prime_number(int n)
{
	int i;

	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			i = i - 1;
			is_prime_number(n);
		}
	}
}
