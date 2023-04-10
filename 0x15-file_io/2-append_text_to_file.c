#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: name of the file
 * @text_content: contents of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, i, out;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fp = open(filename, O_APPEND, O_WRONLY);
	if (fp == -1)
		return (-1);
	for (i = 0; text_content[i] != '\0'; i++)
		;
	out = write(fp, text_content, i);
	if (out == -1)
		return (-1);
	close(fp);
	return (1);
}
