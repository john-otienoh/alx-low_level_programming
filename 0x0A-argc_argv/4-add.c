#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers
 * @argc: argument to cmd
 * @argv: character array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int argu;
	int digit;
	int sum = 0;

	for (argu = 1; argu < argc; argu++)
	{
		for (digit = 0; argv[argu][digit]; digit++)
		{
			if (argv[argu][digit] < '0' || argv[argu][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum = sum + atoi(argv[argu]);
	}

	printf("%d\n", sum);

	return (0);
}
