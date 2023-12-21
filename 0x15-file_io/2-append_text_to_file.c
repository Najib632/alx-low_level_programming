#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of file
 *
 * Return: 1 (SUCCESS), -1 (FAILURE)
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, txt_sz, stat;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	for (txt_sz = 0; text_content[txt_sz]; ++txt_sz)
		;
	stat = write(fd, text_content, txt_sz);
	close(fd);
	return ((stat < 0) ? -1 : 1);
}
