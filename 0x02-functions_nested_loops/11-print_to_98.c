#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: starting point of number
 * Return: always 0
 */
void print_to_98(int n)
{
	int i;

	i = n;
	while (i != 98)
	{
		n = i;
		printf("%d", n);
		if (i < 97)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
}
