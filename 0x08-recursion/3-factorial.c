#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: stores the number.
 * Return: always 0(success) else -1(error)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n <= 1)
		{
			return (1);
		}
		else

			return (n * factorial(n - 1));

	}
}
