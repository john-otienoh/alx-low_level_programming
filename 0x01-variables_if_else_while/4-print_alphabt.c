#include <stdio.h>
/**
 * main -  program that prints the alphabet in
 * lowercase except 'q' and 'e', followed by a
 * new line.
 *
 * lowerCase - stores a character in lowercase
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	char lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		if (lowerCase != 'q' && lowerCase != 'e')
		{
			putchar(lowerCase);
			lowerCase++;
		}
	}
	putchar('\n');
	return (0);
}
