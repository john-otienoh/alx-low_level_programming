#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 * @s: a string
 * Return: always 0(success)
 */
int _atoi(char *s)
{
	int i;
	unsigned int num = 0;
	int value = 1;
	int sign = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 45)
		{
			value = value * -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			sign = 1;
			num = (num * 10) + (s[i] - '0');
			i++;
		}
		if (sign == 0)
		{
			break;
		}
	}
	num = num * value;
	return (num);
}
