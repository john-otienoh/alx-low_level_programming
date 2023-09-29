#include "main.h"
/**
 * is_palindrome - Function that returns 1 if a string is a palindrome and 0 if not.
 * @s: pointer to a string
 *
 * Return: 1 if palindrome, else 0.
 */
int is_palindrome(char *s)
{
	int _strlen_recursion(char *s);
	int my_pali(char *s, int l);
	int length;

	length = _strlen_recursion(s) - 1;
	return (my_pali(s, --length));
}
/**
 * _strlen_recursion - function that returns the length of a string.
 *
 * @s: pointer to a chararcter array
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		return (0);
	}
	length = (1 + _strlen_recursion(++s));
	return (length);
}
/**
 * my_pali - recursive check of palindrome
 * @s: string
 * @l: length of string
 * Return: 1 if palindrome, 0 if not
 */

int my_pali(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
			return (1);
		else
			return (my_pali(++s, l - 2));
	}
	else
		return (0);
}
