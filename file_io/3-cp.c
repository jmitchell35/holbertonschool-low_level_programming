#include "main.h"
/**
  * main - entry point
  * @argc: CLI args count
  * @argv: double-pointer to strings (CLI args)
  * Return: int, 0 on success
  */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, error_flag;
	char *buffer = NULL;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);

	while (buffer == NULL)
		buffer = malloc(sizeof(char) * 1024);
	fd_from = open(argv[1], O_RDONLY);
	error_flag = read(fd_from, buffer, 1024);
	if (error_flag == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
		free(buffer);
		exit(98);
	}
	error_flag = close(fd_from);
	if (error_flag == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		free(buffer);
		exit(100);
	}
	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_flag = write(fd_to, buffer, 1024);
	if (error_flag == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		free(buffer);
		exit(99);
	}
	free(buffer);
	exit(0);
}
