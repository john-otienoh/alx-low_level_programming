#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: argument array
 * @argv: character array
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
			printf("%s\n", argv[0]);
		}
	}
	return (0);
}
