#include "variadic_functions.h"
/*One header...- variadic function prints parameters*/

/**
  * print_char - prints char
  * @args: va_list type parameter
  * @separator: ptr to sep string
  * Return: void
  */
void print_char(va_list args, char *separator)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
  * print_int - prints integer
  * @args: va_list type parameter
  * @separator: ptr to sep string
  * Return: void
  */
void print_int(va_list args, char *separator)
{
	printf("%s%d", separator, va_arg(args, int));
}

/**
  * print_float - prints float
  * @args: va_list type parameter
  * @separator: ptr to sep string
  * Return: void
  */
void print_float(va_list args, char *separator)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
  * print_str - prints string
  * @args: va_list type parameter
  * @separator: ptr to sep string
  * Return: void
  */
void print_str(va_list args, char *separator)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("%s(nil)", separator);
		return;
	}

	printf("%s%s", separator, str);
}

/**
  * print_all - prints passed parameters using 1st parameter's specifiers
  * @format: const ptr to const str, list of specifiers
  * Return: void
  */
void print_all(const char * const format, ...)
{
	print_t print_func[] = {
	{"c", print_char},
	{"i", print_int},
	{"f", print_float},
	{"s", print_str},
	{NULL, NULL}
	};
	va_list args;
	int par_it, struct_it;
	char *separator = "";

	va_start(args, format);
	par_it = 0;
	while (format && format[par_it])
	{
	(struct_it = 0);
	while (print_func[struct_it].specifier)
	{
	if (format[par_it] == *print_func[struct_it].specifier)
	{
	if (print_func[struct_it].ptr_to_print_func != NULL)
	{
	print_func[struct_it].ptr_to_print_func(args, separator);
	separator = ", ";
	}
	}
	struct_it++;
	}
	par_it++;
	}
	printf("\n");
	va_end(args);
}
