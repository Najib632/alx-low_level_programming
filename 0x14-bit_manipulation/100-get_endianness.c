#include "main.h"

/**
 * get_endianness - Gets the byte order of the CPU in a machine
 *
 * Return: 1 (Little Endian), 0 (Big Endian)
 **/
int get_endianness(void)
{
	unsigned int endianness = 1;
	char *byte = (char *)&endianness;

	if (byte[0] == 0)
		return (0);
	return (endianness);
}
