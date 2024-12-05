#include "main.h"
/**
  * create_file - creates a txt file, possibly writes content into it
  * @filename: ptr to filename to be given to new file
  * @text_content: ptr to string to include in file (can be created empty)
  * Return: 1 (succes), -1 (error)
  */

int create_file(const char *filename, char *text_content)
{
	int fd, txt_length, error_flag;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	
	if (text_content == NULL)
		text_content = "";
		
	txt_length = 0;
	while (text_content[txt_length])
		txt_length++;

	error_flag = write(fd, text_content, txt_length);
	close(fd);
	return (error_flag == -1 ? -1 : 1);
}
