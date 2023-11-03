#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if file opened
 * @file_from: file_from
 * @file_to: file_to
 * @argv: arguments vector
 * Return:
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_1, file_2, err_close;
	ssize_t nchar, nwr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_1 file_2");
		exit(97);
	}

	file_1 = open(argv[1], O_RDONLY);
	file_2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_1, file_2, argv);

	nchar = 1024;
	while (nchar == 1024)
	{
		nchar = read(file_1, buff, 1024);
		if (nchas == -1)
			error_file(-1, 0, argv);
		nwr = write(file_2, buff, nchar);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_1);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_1);
		exit(100);
	}

	err_close = close(file_2);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_1);
		exit(100);
	}
	return (0);
}
