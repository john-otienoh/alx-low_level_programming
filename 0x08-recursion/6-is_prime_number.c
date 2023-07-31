#include "main.h"

/**
 * is_prime_number - determine if a number is a prime number
 * @n: int number
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int prime_num(int div, int n);

	int div = 2;

	if (n < 2)
	{
		return (0);
	}
	if (n % n == 0 || n % 1 == 0)
	{
		if (prime_num(div, n) != 0)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}

/**
 * prime_num - helper function
 * @n: number given to the function "is_prime_number"
 * @div: incrementer 
 * Return: 0 if not prime, 1 if prime
 */

int prime_num(int div, int n)
{
	if (div < n)
	{
		if (n % div == 0)
		{
			return (0);
		}
		else
		{
			++div;
			return (prime_num(div, n));
		}
	}
	else
	{
		return (1);
	}
}
