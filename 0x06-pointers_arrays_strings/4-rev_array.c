#include "main.h"
#include <stdio.h>
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: an array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
