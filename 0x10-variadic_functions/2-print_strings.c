#include  <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_strings - function that prints
 * @n: argument count
 * @separator: is the string to be printed between strings
 * Return: always 0(success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print_strings;
	unsigned int i;
	int j;
	char *s;

	va_start(print_strings, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%s", separator);
		}
		if (s == NULL)
		{
			printf("nil");
		}
		else
		{
			for (j = 0; s[j] != '\0'; j++)
			{
				s = va_arg(print_strings, char*);
				printf("%c, ", s[j]);
			}
		}
	}
	printf("\n");
	va_end(print_strings);
}
