#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: name of the file
 * @text_content: contents of the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp, i = 0, out;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
		out = write(fp, text_content, i);
		if (out == -1)
			return (-1);
	}
	close(fp);
	return (1);
}
