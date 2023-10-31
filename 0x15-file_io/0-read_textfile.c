#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile -  function that reads a text file and prints 
 * it to the POSIX standard output.
 * @letters: number of letters it should read and print
 * @filename: The name of file to be executed
 * Return: actual number of letters it could read and print or 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fD;
	ssize_t _read, _write;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fD = open(filename, O_RDONLY);
	if (fD == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	_read = read(fD, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		close(fD);
		return (0);
	}
	if (_write == -1)
	{
		free(buffer);
		close(fD);
		return (0);
	}
	close(fD);
	return (_read);
}

