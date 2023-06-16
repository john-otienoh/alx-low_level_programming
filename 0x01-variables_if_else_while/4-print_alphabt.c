#include<stdio.h>
/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter = 'a';
	
	do
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
			letter++;
		}
	} while (letter <= 'z');
	putchar('\n');
	return (0);
}
