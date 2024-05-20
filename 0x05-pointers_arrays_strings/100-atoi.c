#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 * @s: a string
 * Return: always 0(success)
 */
int _atoi(char *s)
{
    int i, sign, num, len;

    i = 0;
    sign = 1;
    num = 0;
    len = 0;

    while (s[len] != '\0')
        len++;

    while (i < len && (s[i] < '0' || s[i] > '9'))
    {
        if (s[i] == '-')
            sign *= -1;
        i++;
    }

    while (i < len && (s[i] >= '0' && s[i] <= '9'))
    {
        num = num * 10 + (s[i] - '0');
        i++;
    }

    return (num * sign);
}
