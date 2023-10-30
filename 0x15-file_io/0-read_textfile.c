#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout
 * @filename: A pointer to the name of the file
 * @letters: The number of letters the
 * function should read and print
 * Return: 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t _open, _read, _write;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	_open = open(filename, O_RDONLY);
	_read = read(_open, buffer, letters);
	_write = write(STDOUT_FILENO, buffer, _read);

	if (_open == -1 || _read == -1 || _write == -1 || _write != _read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(_open);

	return (_write);
}
