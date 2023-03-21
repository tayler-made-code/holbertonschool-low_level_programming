#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: number of letters to print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);

	rd = read(file, buffer, letters);
	if (rd == -1)
		return (0);

	buffer[letters] = '\0';

	wr = write(1, buffer, rd);
	if (wr == -1)
		return (0);

	close(file);
	free(buffer);
	return (wr);
}
