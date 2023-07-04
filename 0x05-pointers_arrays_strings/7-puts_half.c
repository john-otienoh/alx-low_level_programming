#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: the string
 * Return: always 0(success)
 */
void puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i] / 2);
		i++;
	}
	_putchar('\n');
}
