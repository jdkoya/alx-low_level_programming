#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file.
 * @filename: A pointer to the file.
 * @text_content: pointer to the string to add to the end of the file.
 * Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ptr, wrt, length = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	ptr = open(filename, O_WRONLY | O_APPEND);
	wrt = write(ptr, text_content, length);

	if (ptr == -1 || wrt == -1)
		return (-1);

	close(ptr);

	return (1);
}

