#ifndef MAIN_H
#define MAIN_H

#include <unistd.h> /*close, read, write*/
#include <fcntl.h> /* for open and flags like O_RDONLY*/
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h> /*mode_t, off_t*/
#include <sys/stat.h> /*O_CREAT*/
#include <errno.h> /*Error handling*/

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void close_file_descriptor(int fd);
void check_argc(int argc);
void check_fd(int fd);

#endif
