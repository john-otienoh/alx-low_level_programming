#include "main.h"
/**
 * is_prime_number -  checks if anumber ia a prime number
 * @n: stores the integer
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
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
			is_prime_number(n, (i - 1));
		return ();
	}
