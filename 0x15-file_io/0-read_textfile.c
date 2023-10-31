#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads text file and prints it to POSIX
 * @filename: the name of the file.
 * @letters: no. of letters to be read and printed.
 *
 * Return: no. of letters printed, NULL, or 0 otherwise.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	FILE *file;
	size_t data_read, data_written;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	buffer = malloc(letters);

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	data_read = fread(buffer, 1, letters, file);

	if (data_read <= 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	data_written = write(STDOUT_FILENO, buffer, data_read);
	if (data_written != data_read)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	fclose(file);
	free(buffer);

	return (data_read);
}
