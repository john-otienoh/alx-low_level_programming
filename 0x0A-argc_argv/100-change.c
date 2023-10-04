#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program.
 * @argc: Argument count.
 * @argv: A character array.
 * Return: Always 0 (success),
 * else return 1 if the number of argument is not exactly 1.
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	cents = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents = cents - 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents = cents - 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents = cents - 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents = cents - 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);
	return (0);
}
