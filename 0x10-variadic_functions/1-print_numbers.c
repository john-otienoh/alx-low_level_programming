#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Function that prints numbers, followed by a new line
 * @separator: String to be printed between numbers
 * @n: number of arguments pssed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	if (separator == NULL)
	{
		/*printf("");*/
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	va_end(numbers);
	printf("\n");
}
