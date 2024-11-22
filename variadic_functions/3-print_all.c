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
	printf("%s", separator);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
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
	/*Declaring an array of print_t type (see header)*/
	va_list args;
	/*Needed for iterating arguments passed to func*/
	int par_it, struct_it;
	/*count variables for iterating parameter and array of struct*/
	char *separator = "";
	/*separator not to be printed for first iteration*/
	va_start(args, format);
	/*Initializing args*/
	par_it = 0;
	while (format && format[par_it])
	{/*Entering loop iterating parameter "format"*/
	(struct_it = 0);
	while (print_func[struct_it].specifier)
	{/*Entering loop iterating array of struct looking for specifier match*/
	if (format[par_it] == *print_func[struct_it].specifier)
	{/*True if match found*/
	if (print_func[struct_it].ptr_to_print_func != NULL)
	{/*True if not null pointer to printing function*/
	print_func[struct_it].ptr_to_print_func(args, separator);
	/*Get right ptr to printing function, passing va_list and sep */
	separator = ", ";
	/*Initialized after 1st loop : no print before first printed arg*/
	}
	}
	struct_it++;
	}
	par_it++;
	}
	printf("\n");
	va_end(args);
}

