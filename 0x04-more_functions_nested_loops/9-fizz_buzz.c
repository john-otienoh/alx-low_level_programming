#include <stdio.h>
/**
 * main - program that prints the numbers from 1 to 100
 * ollowed by a new line
 * but for multiples of three print Fizz instead of the
 * number and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Return: Always 0(success)
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else if (i == 1)
			printf("%d", i);
		else
			printf(" %d", i);
	}
	printf("\n");
	return (0);
}
