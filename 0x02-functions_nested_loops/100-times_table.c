#include "main.h"

/**
 *  * print_times_table - prints the n times table, starting with 0
 *   * @n: number of the times table
 *    */
void print_times_table(int n)
{
<<<<<<< HEAD
	int i, j, k;
	
	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
																			{
																								k = j * i;
																												if (j == 0)
																																	{
																																							_putchar(k + '0');
																																											} else if (k < 10 && j != 0)
																																																{
																																																						_putchar(',');
																																																											_putchar(' ');
																																																																_putchar(' ');
																																																																					_putchar(' ');
																																																																										_putchar(k + '0');
																																																																														} else if (k >= 10 && k < 100)
																																																																																			{
																																																																																									_putchar(',');
																																																																																														_putchar(' ');
																																																																																																			_putchar(' ');
																																																																																																								_putchar((k / 10) + '0');
																																																																																																													_putchar((k % 10) + '0');
																																																																																																																	} else if (k >= 100)
																																																																																																																						{
																																																																																																																												_putchar(',');
																																																																																																																																	_putchar(' ');
																																																																																																																																						_putchar((k / 100) + '0');
																																																																																																																																											_putchar(((k / 10) % 10) + '0');
																																																																																																																																																_putchar((k % 10) + '0');
																																																																																																																																																				}
																																																																																																																				}
																		_putchar('\n');
																				}
									}
=======
	int col = 0, row = 0, m = 0;

	if (n < 16 && n >= 0)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				m = col * row;
				if (col == 0)
					_putchar(m + '0');
				else if (m < 10 && col != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(m + '0');
				}
				else if (m >= 10 && m < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((m / 10) + '0');
					_putchar((m % 10) + '0');
				} else if (m >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((m / 100) + '0');
					_putchar(((m / 10) % 10) + '0');
					_putchar((m % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
>>>>>>> ed4a38257a4d8907a89a54418dd33b66bc60f252
}
