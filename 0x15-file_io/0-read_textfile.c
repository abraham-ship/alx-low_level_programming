#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to
 * the POSIX standard output
 * @filename: name of text file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int in, out;
	char *ch;

	if (filename == NULL)
		return (0);
	ch = malloc(sizeof(char) * letters);
	if (ch == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	in = read(fd, ch, letters);
	if (in == -1)
		return (0);
	out = write(STDOUT_FILENO, ch, in);
	if (in != out || in == -1 || out == -1)
		return (0);
	free(ch);
	close(fd);
	return (out);
}
