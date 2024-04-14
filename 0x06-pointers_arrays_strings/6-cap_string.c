#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @s: string.
 * Return: Capitalised string.
 */
char *cap_string(char *s)
{
	char sep[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' '};
	int i = 0;

	while (i != '\0')
	{
		for (j = 0; j <= sizeof(sep) / sizeof(sep[0]); j++)
		{
			if (s[i] == sep[j])
				s[i + 1] = string_toupper(s[i + 1]);
		}
		i++;

	}
	return (s);
}
