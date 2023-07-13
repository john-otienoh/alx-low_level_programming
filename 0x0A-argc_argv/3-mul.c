#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 * @argc: argument count
 * @argv: character array
 * Return: Always 0 otherwise return 1 if no argument is passed
 */
int main(int argc, char *argv[])
{
	int result = 0;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);
}


