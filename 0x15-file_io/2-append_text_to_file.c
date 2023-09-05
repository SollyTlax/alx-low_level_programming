#include "main.h"
/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: The name of the file
 * @text_content: The text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o_file, w_file, len;

	if (!filename)
		return (-1);
	else if (!text_content || !text_content[0])
		return (1);

	o_file = open(filename, O_WRONLY | O_APPEND);

	if (o_file < 0)
		return (-1);

	while (text_content[len])
		len++;
	w_file = write(o_file, text_content, len);

	if (w_file < 0)
		return (-1);

	close(o_file);
	return (1);

}
