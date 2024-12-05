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

#endif
