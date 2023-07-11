#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program will assign a random number to the variable n
 * in order to print the last digit of the number stored in the variable n.
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is", n);
	n = n % 10;
	/* your code goes there */
	if (n > 5)
	{
		printf(" %d and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf(" %d and is 0 and is 0 \n", n);
	}
	else
	{
		printf(" %d and is less than 6 and not 0 \n", n);
	}
	return (0);
}
