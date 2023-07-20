#include  <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: argument count
 * Return: always 0(success)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sums;

	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(sums, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(sums, int);
	}
	va_end(sums);
	return (sum);
}
