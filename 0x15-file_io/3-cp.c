#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * main - Copie the content of a file to another
 * @ac: Number of args
 * @av: Array args
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	int opfrom, clfrom, rdfrom;
	char *buffer[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (av[1] == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	opfrom = open(av[1], O_RDONLY);
	if (opfrom == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	rdfrom = read(opfrom, buffer, 1024);
	if (rdfrom == -1)
	{
		clfrom = close(opfrom);
		if (clfrom == -1)
		{
			dprintf(2, "Error: Can't close fd %d\n", opfrom);
			exit(100);
		}
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	return (0);
}
