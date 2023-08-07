#include "main.h"

/**
 * read_textfile- a function that reads text file and print to STDOUT.
 * @filename: pointer to text file
 * @letters: number of letters
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *copyf;
	ssize_t fp, dsp, rd;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	copyf = malloc(sizeof(char) * letters);
	rd = read(fp, copyf, letters);
	dsp = write(STDOUT_FILENO, copyf, rd);

	free(copyf);
	close(fp);
	return (dsp);
}

