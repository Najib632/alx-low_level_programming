#include "main.h"

/**
 * check_close - Checks if closing files was successful.
 * @inputFd: input file descriptor
 * @outputFd: output file descriptor
 *
 * Return: Nothing
 **/
void check_close(int inputFd, int outputFd)
{
	if (close(inputFd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", inputFd);
		exit(100);
	}
	if (close(outputFd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", outputFd);
		exit(100);
	}
}

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
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	inputFd = open(av[1], O_RDONLY);
	if (inputFd == -1 || access(av[1], F_OK) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	filePerms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	outputFd = creat(av[2], filePerms);
	if (outputFd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((numRead = read(inputFd, buff, BUF_SIZE)) > 0)
	{
		stat = write(outputFd, buff, numRead);
		if (stat != numRead)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (numRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	check_close(inputFd, outputFd);
	return (0);
}
