#include <stdio.h>
/**
 * main - program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2,
 * Return: Always 0
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int i, c;

	printf("%d, %d, ", a, b);
	for (i = 0; i <= 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d", c);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
