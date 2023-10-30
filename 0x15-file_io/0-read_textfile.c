#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: name of the file to read
 * @letters: The number of letters
 * Return: If fails filename is NULL or
 * the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_1;
	ssize_t j, k;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_1 = open(filename, O_RDONLY);
	if (file_1 == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_1)
		return (0);
	}
	j = read(file_1, buffer, letters);
	close(file_1);
	if (j == -1)
	{
		free(buffer);
		return (0);
	}
	k = write(STDOUT_FILENO, buffer, j);
	free(buffer);
	if (j != k)
		return (0);
	return (k);
}
