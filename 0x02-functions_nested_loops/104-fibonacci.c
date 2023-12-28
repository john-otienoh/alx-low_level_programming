#include <stdio.h>
/**
 * main - program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2,
 * Return: Always 0
 */
int main(void)
{
	unsigned long long int a = 1;
	unsigned long long b = 2;
	unsigned long long int i, c;

	printf("%llu, %llu, ", a, b);
	for (i = 0; i <= 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%llu", c);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
