#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @str: the string to be checked.
 *
 * Return: length of the string.
 */

int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	return (length);
}
/**
 * append_text_to_file - appends text to the end of file.
 * @filename: the name of the file.
 * @text_content: content of the filename file.
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, length_of_text;
	ssize_t data_written;

	if (filename == NULL || text_content == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND | O_CREAT);
	if (file_descriptor == -1)
		return (-1);

	length_of_text = _strlen(text_content);
	data_written = write(file_descriptor, text_content, length_of_text);

	close(file_descriptor);

	if (data_written == -1 || data_written != length_of_text)
		return (-1);

	return (1);
}
