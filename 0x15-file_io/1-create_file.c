#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, check, i = 0;

	if (filename == 0)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[i] != 0)
			i++;
		check = write(file, text_content, i);

		if (check == -1)
			return(-1);
	}
	close(file);
	return (1);
}
