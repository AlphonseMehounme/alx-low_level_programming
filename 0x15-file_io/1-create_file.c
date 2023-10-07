#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - Create a new file
 * @filename: Filename
 * @text_content: Text content
 *
 * Return: 1 if successful or -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, size;

	if (filename == NULL)
	{
		return (-1);
	}
	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (op == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		wr = write(op, text_content, strlen(text_content));
	}
	size = strlen(text_content);
	if (wr == -1 || wr != size)
	{
		close(op);
		return (-1);
	}
	return (1);

}
