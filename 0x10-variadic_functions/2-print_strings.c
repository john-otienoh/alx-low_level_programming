#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;

	unsigned int i;

	va_start(string, n);

	if (separator == NULL)
	{

	}
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(string, char *));
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	va_end(string);
}
