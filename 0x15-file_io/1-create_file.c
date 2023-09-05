#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unist.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * create_file - Creates a file and writes text content to it
 * @filename: The name of the file to create
 * @text_content: The text content to write to the file
 * (or NULL for an empty file)
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o_file, w_file, len;

	if (!filename)
		return (-1);

	o_file = open(filename, O_CREATE | O_RDWR | O_TRUNC, 0600);

	if (o_file < 0)
		return (-1);
	while (text_content && text_content[len])
		len++;

	w_file = write(o_file, text_content, len);
	if (w_file < 0)
		return (-1);
	close(o_file);
	return (1);

}
