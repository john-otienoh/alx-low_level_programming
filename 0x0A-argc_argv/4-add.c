#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program.
 * @argc: Argument Count
 * @argv: A character array
 * Return: Always 0(Success) else return 1 if no argument is passed.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 0)
	{
		printf("%d\n", argc);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) <= 0 && atoi(argv[i]) >= 9)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
