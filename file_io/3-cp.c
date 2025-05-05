#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - Entry point
 * @argc: int, number of arguments passed to CLI
 * @argv: array of pointers to strings
 * Return: 0 on success, exits with error codes otherwise
 */
int main(int argc, char *argv[])
{
	check_argc(argc);
	copy_file(argv[1], argv[2]);
	return (0);
}
/**
 * check_argc - checks the number of arguments
 * @argc: count of args passed through CLI, sent from main
 */
void check_argc(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * copy_file - handles the actual copy operation
 * @file_from: source file passed to CLI
 * @file_to: destination file
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
	close_file_descriptor(fd_from);
	exit(99);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
	bytes_written = write(fd_to, buffer, bytes_read);
	if (bytes_written == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
	close_file_descriptor(fd_from);
	close_file_descriptor(fd_to);
	exit(99);
	}
	}
	if (bytes_read == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	close_file_descriptor(fd_from);
	close_file_descriptor(fd_to);
	exit(98);
	}
	close_file_descriptor(fd_from);
	close_file_descriptor(fd_to);
}
/**
 * close_file_descriptor - Closes a file descriptor and checks for errors
 * @fd: File descriptor to close
 */
void close_file_descriptor(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

