#include "main.h"
/**
  * main - entry point
  * @argc: CLI args count
  * @argv: double-pointer to strings (CLI args)
  * Return: int, 0 on success
  */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[1024];

	check_argc(argc);
	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
		}
	}

	if (fd_from == -1 || bytes_read == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	if (bytes_written == -1 || fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}
	close_file_descriptor(fd_from);
	close_file_descriptor(fd_to);
	exit(0);
}
/**
  * close_file_descriptor - closes provided file descriptor
  * @fd: int, file descriptor to close
  * Return: void - exits program on error
  */
void close_file_descriptor(int fd)
{
	if ((close(fd) < 0))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
  * check_argc - checks number of args passed through CLI
  * @argc: number of args passed through CLI
  * Return: void - exits program on error
  */
void check_argc(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(99);
	}
}
