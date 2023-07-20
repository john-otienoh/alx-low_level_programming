#include "main.h"
#include <stdio.h>
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: an array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int i;
	int count = 0;

	for (i = (n - 1); i >= 0; i--)
	{
		count++;
		printf("%d", a[i]);
		if (count < n)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
