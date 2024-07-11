#include "main.h"

/**
 * wildcmp -  function that compares two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: 1 if the strings can be considered identical, otherwise return 0
 *
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);
		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2 + 1))
				return (1);
			s1++;
		}
		return (0);
	}
	else if (*s1 == *s2)
	{
		if (*(s1 + 1) == '\0' && *(s2 + 1) == '\0')
			return (1);
		else
			return (wildcmp(s1 + 1, s2 + 1));
	}
	else
		return (0);
}
