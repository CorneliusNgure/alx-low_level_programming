#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
  * main - entry point
  * @ac: argument count
  * @av: array of argument tokens
  * Return: 0 on success
  */
int main(int ac, char *av[])
{
	int f_d_from, f_d_to, read_stat, write_stat;
	mode_t permissions = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	char buffer[BUFFER_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	f_d_from = open(av[1], O_RDONLY);
	if (f_d_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	f_d_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, permissions);
	if (f_d_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	read_stat = 1;
	while (read_stat)
	{
		read_stat = read(f_d_from, buffer, BUFFER_SIZE);
		if (read_stat == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (read_stat > 0)
		{
			write_stat = write(f_d_to, buffer, read_stat);
			if (write_stat != read_stat || write_stat == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	if (close(f_d_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_d_from), exit(100);
	if (close(f_d_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_d_to), exit(100);
	return (0);
}
