#include "main.h"
#include <err.h>

#define BUF_SIZE 1024

/**
 * main - Copies the content of a file to another file.
 * @ac: arg count
 * @av: arg variable
 *
 * Return: Always 0 (SUCCESS)
 **/
int main(int ac, char *av[])
{
	int inputFd, outputFd, stat;
	mode_t filePerms;
	ssize_t numRead;
	char buff[BUF_SIZE];

	if (ac != 3)
		errx(97, "Usage: cp file_from file_to");
	inputFd = open(av[1], O_RDONLY);
	if (inputFd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	filePerms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP;
	outputFd = creat(av[2], filePerms);
	while ((numRead = read(inputFd, buff, BUF_SIZE)) > 0)
	{
		stat = write(outputFd, buff, numRead);
		if (stat != numRead)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (close(inputFd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close inputFd fd %d\n", inputFd);
		exit(100);
	}
	if (close(outputFd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close outputFd fd %d\n", outputFd);
		exit(100);
	}
	return (0);
}
