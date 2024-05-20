#include "main.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: an integer.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			j = 1;
			break;
		}
		i++;
	}
	if (j == 0 && s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else
		return (atoi(s1));
}
