#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - assign a random number and checks 
 * whether it is greater than 5, is 0 or is
 * less than 6 and 0
 * 
 * last_digit - stores the last digit of the
 * random number
 * 
 * Return: Returns 0(Success)
 */
 
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	/* your code goes there */
	if (last_digit > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	if (last_digit == 0)
	{
		printf("The last digit of %d is %d and is 0\n", n, last_digit);
	}
	if (last_digit < 5 && last_digit != 0)
	{
		printf("The last digit of %d is %d and is less than 6 and not 0 \n", n, );
	}

	return (0);
}
