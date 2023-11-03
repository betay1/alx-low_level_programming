#include "main.h"

/**
 * create_file - creates file
 * @filename: filename
 * @text_content: content in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file_1;
	int nletters;
	int rwr;

	if (filename == Null)
		return (0);

	file_1 = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_1 == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(file_1, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(file_1);

	return (1);
}
