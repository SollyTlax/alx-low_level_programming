#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <unist.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * read_textfile - Reads a text file and prints it to standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters read and printed,
 * or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f_read, f_write, f_close;
	int f_open;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (-1);
	}
	f_open = open(filename, O_RDONLY);

	if (f_open == -1)
		return (-1);

	f_read = read(f_open, buffer, letters);
	if (f_read == -1)
		return (-1);

	f_write = write(STDOUT_FILENO, buffer, f_read);
	if (f_write == -1)
		return (-1);
	f_close = close(f_open);

	if (f_close == -1)
		return (-1);

	/*	free(buffer);	*/
	/*	return (0);	*/

	return (f_read);

}
