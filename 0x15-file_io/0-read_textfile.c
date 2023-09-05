#include "main.h"

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
	ssize_t o_file, r_file, w_file;
	char *buffer;

	if (!filename || !letters)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);
	0_file = open(filename, O_RDONLY);
	r_file = read(o_file, buffer, letters);
	w_file = write(STDOUT_FILENO, buffer, r_file);

	if (o_file < 0 || r_file < 0 || w_file < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o_file);

	return (w_file);

}
