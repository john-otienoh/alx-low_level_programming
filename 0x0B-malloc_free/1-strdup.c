#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory which contains a copy of the string given as a parameter.
 * @str: pointer to a string
 * Return: a character
 */
char *_strdup(char *str)
{
	char *mal_loc;
	int len_gth;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	len_gth = 0;
	for (i = 0; str[i] != '\0'; i++)
		;
	mal_loc = malloc((len_gth * sizeof(char)) + 1);
	if (mal_loc == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		mal_loc[i] = str[i];
		i++;
	}
	mal_loc[i] = '\0';
	return (mal_loc);
}
