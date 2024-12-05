#include "main.h"
/**
  * append_text_to_file - appends text to end of file
  * @filename: ptr to filename (absolute path)
  * @text_content: ptr to str to be appended to text file
  * Return: 1 (succes), -1 (error)
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, txt_length, error_flag;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	txt_length = 0;
	while (text_content[txt_length])
		txt_length++;

	error_flag = write(fd, text_content, txt_length);
	close(fd);
	return (error_flag == -1 ? -1 : 1);
}
