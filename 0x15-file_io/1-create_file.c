#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 (SUCCESS), -1 (FAILURE)
 **/
int create_file(const char *filename, char *text_content)
{
	int fd, text_size, stat;
	mode_t filePerms;

	if (filename == NULL)
	{
		return (-1);
	}
	filePerms = S_IRUSR | S_IWUSR;
	fd = creat(filename, filePerms);
	if (fd == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		return (-1);
	}
	for (text_size = 0; text_content[text_size]; ++text_size)
		;
	stat = write(fd, text_content, text_size);
	close(fd);
	return ((stat > 0) ? 1 : -1);
}
