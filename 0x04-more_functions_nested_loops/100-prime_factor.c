#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0(success)
 */
int main(void)
{
	long long n, i;

	n = 612852475143;
	for (i = 2; i < n; i++)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}
	printf("%lu\n", n);
	return (0);
}
