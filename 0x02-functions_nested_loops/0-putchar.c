#include "main.h"
/**
 * main - program that prints _putchar, followed by a new line.
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char  print[] = "_putchar";
	int i;

	for (i = 0; i != '\0'; i++)
	{
		_putchar(print[i]);
	}
	_putchar('\n');
	return (0);
}
