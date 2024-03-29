#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: path to file
 * @letters: number of letters to read and print
 *
 * Return: Number of letters it could read and print (PASS), 0 (FAIL)
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *text;
	size_t letters_read;
	char *buffer = malloc((1 + letters) * sizeof(char));
	int status = access(filename, F_OK | R_OK);

	if (!filename || !buffer || status < 0)
	{
		return (0);
	}
	text = fopen(filename, "r");
	if (!text)
	{
		fclose(text);
		return (0);
	}
	buffer[letters] = '\0';
	letters_read = fread(buffer, 1, letters, text);
	if (write(STDOUT_FILENO, buffer, letters_read) < 0)
	{
		fclose(text);
		return (0);
	}
	fclose(text);
	return (letters_read);
}
