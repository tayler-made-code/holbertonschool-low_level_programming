#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: name of the file
 * @argv: string to append to file
 * Return: Always 0 on success
 */

int main(int argc, char **argv)
{
	int fdfrom, fdto, check_read, check_write, check_close;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fdfrom = open(argv[1], O_RDONLY);
	if (fdfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fdto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdto == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((check_read = read(fdfrom, buffer, 1024)) > 0)
	{
		check_write = write(fdto, buffer, check_read);
		if (check_write != check_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (check_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	check_close = close(fdfrom);
	if (check_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdfrom), exit(100);
	check_close = close(fdto);
	if (check_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdto), exit(100);
	return (0);
}
