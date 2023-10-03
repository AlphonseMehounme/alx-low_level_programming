#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - Read file and print to stdout
 * @filename: Filename
 * @letters: Number of byte to write
 *
 * Return: Number of byte printed or à if failed
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int op, rd, wr;
	char *c;

	if (filename == NULL)
	{
		return (0);
	}
	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		return (0);
	}
	c = malloc(letters);
	if (c == NULL)
	{
		close(op);
		return (0);
	}
	rd = read(op, c, letters);
	if (rd == -1)
	{
		close(op);
		free(c);
		return (0);
	}
	wr = write(STDOUT_FILENO, c, rd);
	if (wr == -1 || wr != rd)
	{
		close(op);
		free(c);
		return (0);
	}
	close(op);
	free(c);
	return (wr);

}
