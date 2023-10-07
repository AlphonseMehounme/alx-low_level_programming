#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - Append text to file
 * @filename: Filename
 * @text_content: Content to append
 *
 * Return: 1 if successful
 * -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, size;

	if (filename == NULL)
	{
		return (-1);
	}
	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		size = strlen(text_content);
		wr = write(op, text_content, size);
		if (wr == -1 || wr != size)
		{
			close(op);
			return (-1);
		}
	}
	close(op);
	return (1);
}
