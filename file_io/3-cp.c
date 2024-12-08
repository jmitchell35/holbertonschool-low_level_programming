#include "main.h"
/**
  * main - entry point
  * @argc: CLI args count
  * @argv: double-pointer to strings (CLI args)
  * Return: int, 0 on success
  */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_written, bytes_total;
	unsigned char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);
	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_written == (fd_to, buffer, bytes_read);
		if (bytes_written == -1 || fd_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			close(fd_from), close(fd_to), exit(99);
		}
		fd_to = open(argv[2], O_WRONLY | O_APPEND);
	}
	if (bytes_read == -1 || fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from), close(fd_to), exit(98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		close(fd_to), exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	exit(0);
}
