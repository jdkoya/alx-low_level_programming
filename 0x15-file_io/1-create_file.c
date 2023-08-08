#include "main.h"

/**
 * create_file - A function that creates a file.
 * @filename: A pointer to the file.
 * @text_content: A pointer to a string to write to the file.
 * Return: 0
 */
int create_file(const char *filename, char *text_content)
{
	int fp, wrt, length = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(fp, text_content, length);

	if (fp == -1 || wrt == -1)
		return (-1);

	close(fp);

	return (1);
}

