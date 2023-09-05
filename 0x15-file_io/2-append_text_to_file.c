#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the file name
 * @text_content: the content to append
 *
 * Return: 1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t o, w;

	if (!filename)
		return (-1);

	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
		return (-1);

	if (text_content)
	{
		w = write(o, text_content, strlen(text_content));
		if (w == -1)
		{
			close(o);
			return (-1);
		}
	}
	close(o);

	return (1);
}
