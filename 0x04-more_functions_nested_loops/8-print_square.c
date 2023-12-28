#include "main.h"
/**
 * print_square - function that prints a square, followed by a new line.
 * @size: size of the square
 * Return: Always 0(success)
*/
void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (size == 0 || size < 0)
			{
				_putchar('\n');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
