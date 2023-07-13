#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc: argument count
 * @argv: character array
 * Return: Always 0(success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	int n;

	n = argc - 1;
	printf("%d", n);
	printf("\n");
	return (0);
}
