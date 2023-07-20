#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - function that prints numbers
 * @n: argument count
 * @separator: is the string to be printed between numbers
 * Return: always 0(success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print_numbers;
	unsigned int i;

	va_start(print_numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print_numbers, unsigned int));
		if (i < (n - 1))
			printf("%s", separator);
		if (separator == NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(print_numbers);
	printf("\n");
}
