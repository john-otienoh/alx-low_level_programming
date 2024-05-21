#include "search_algos.h"
#include <math.h>

/**
 * binary_search - function that searches for a value in an array of integers
 * using the Binary search algorithm.
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 * Return: the first index where value is located or -1.
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned long int flag = 0, mid, low = 0, high = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
	while (low <= high)
	{
		mid = (int) floor((low + high) / 2);
	
		if (array[mid] == value)
		{
			flag = 1;
			break;
		}
		else if (array[mid] < value)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	if (flag == 1)
		return (mid);
	else
		return (-1);
}
