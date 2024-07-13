#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: argument array
 * @argv: character array
 * Return: Always 0(Success).
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc < 0)
	{
		printf("NO ARGUMENTS\n");
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	/*printf("\n");*/
	return (0);
}
