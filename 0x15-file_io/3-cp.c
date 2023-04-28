#include "main.h"

void closer(int f);
/**
 * main - a program that copies the content of a file to another file.
 * @argc: argument count
 * @argv: pointer to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int ptr1, ptr2, bytes;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ptr1 = open(argv[1], O_RDONLY);
	ptr2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (ptr1 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (ptr2 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes = read(ptr1, buffer, 1024)) > 0)
	{
		if (write(ptr2, buffer, bytes) != bytes)
		{
			dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	closer(ptr1);
	closer(ptr2);

	return (0);
}

/**
 * closer - closer file
 * @f: file to close
 */
void closer(int f)
{
	int i;

	i = close(f);

	if (i == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
}
