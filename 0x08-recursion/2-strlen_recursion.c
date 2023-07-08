#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer to a character array
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int str_len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		str_len = 1 + _strlen_recursion(s + 1);
		return (str_len);
	}
}
