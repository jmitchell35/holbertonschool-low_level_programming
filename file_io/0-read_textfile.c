#include "main.h"
/**
  * read_textfile - reads a txt file and prints it to the POSIX std out
  * @filename: ptr to filename to open (absolute path)
  * @letters: size_t number of letters to print
  * Return: Actual number of letters read and printed
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read, error_flag;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		return (0);
	}
	error_flag = write(STDOUT_FILENO, buffer, bytes_read);
	close(fd);
	free(buffer);
	return (error_flag);
}
