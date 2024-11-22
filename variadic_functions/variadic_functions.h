#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list args, char *separator);
void print_int(va_list args, char *separator);
void print_float(va_list args,  char *separator);
void print_str(va_list args, char *separator);

/**
  * struct print_t - ptr to char (specifier) and pointer to print function
  * @specifier: ptr to str specifier of type to print
  * @ptr_to_print_func: ptr to printing function of matched type
  */
typedef struct print_t
{
	char *specifier;
	void (*ptr_to_print_func)(va_list args, char *separator);
} print_t;

#endif

