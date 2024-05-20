#include <stdio.h>
/**
 * main - program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2,
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int j1, j2, k1, k2, i;

	printf("%lu", a);
	for (i = 1; i <= 91; i++)
	{
		printf(", %lu", b);
		b = b + a;
		a = b - a;
	}
	j1 = a / 1000000000;
	j2 = a % 1000000000;
	k1 = b / 1000000000;
	k2 = b % 1000000000;
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", k1 + (k2 / 1000000000));
		printf("%lu", k2 % 1000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}
	putchar('\n');
	return (0);
}
