#include <stdio.h>
/**
 * main -  program that prints all possible different combinations of
 *  three digits.
 *  Return: Always 0
 */
int main(void)
{
	int x, y, z;

	for (x = 48; x <= 57; x++)
	{
		for (y = 49; y <= 57; y++)
		{
			for (z = 50; z <= 57; z++)
			{
				if (z > y && y > x)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x != 55 || y != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
