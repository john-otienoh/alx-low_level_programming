#include <stdio.h>
/**
 * main - program that prints all arguments it receives
 * @argc: argument count
 * @argv: character array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int argu;

	if (argc < 0)
	{
		printf("No Arguments\n");
	}
	else
	{
		for (argu = 0; argu < argc; argu++)
		{
			printf("%s\n", argv[argu]);
		}
	}
	return (0);
}
