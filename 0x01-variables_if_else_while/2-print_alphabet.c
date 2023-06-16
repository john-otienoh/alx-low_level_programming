#include <stdio.h>

/**
 * main - prints alphabets in lowercase
 *
 * lowerCase - stores a character that is in lowercase
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	char lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase++;
	}
	putchar('\n');
	return (0);
}
