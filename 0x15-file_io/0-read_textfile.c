#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it
 * @filename: name of the file
 * @letters: The number of letters
 * Return: If fails filename is NULL or
 * the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_1;
	ssize_t j, k;
	char *buff;

	if (filename == NULL)
		return (0);
	file_1 = open(filename, O_RDONLY);
	if (file_1 == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (buff == NULL)

		return (0);

	j = read(file_1, buff, letters);
	k = write(STDOUT_FILENO, buff, j);

	close(file_1);
	free(buff);
	return (k);
}
