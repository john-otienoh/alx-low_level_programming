#include "main.h"
/**
 * print_times_table - function that prints the n times table, starting with 0.
 * @n: size of the table
 */
void print_times_table(int n)
{
	int col = 0, row = 0, unit = 0, tens = 0, m = 0;

	if (n < 16 && n > 0)
	{
		while (row <= n)
		{
			while (col <= n)
			{
				m = col * row;
				unit = m % 10;
				tens = (m - unit) / 10;
				if (col > 0)
				{
					_putchar(' ');
					if (tens <= 0)
					{
						_putchar(' ');
					}
					else
					{
						_putchar(tens + '0');
					}
				}
				_putchar(unit + '0');
				if (col < n)
				{
					_putchar(',');
				}
				col++;
			}
			col = 0;
			row++;
			_putchar('\n');
		}
	}
}
