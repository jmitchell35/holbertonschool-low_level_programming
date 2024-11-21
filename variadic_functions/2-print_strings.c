#include "variadic_functions.h"
/*One header...variadic function prints string params separated by char */

/**
  * print_strings - prints string params separated by separator char *
  * @separator: const address pointer to separator character
  * @n: const unsigned int - origin of, and number of iterations
  * Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	/*va_list turns args into iterable list called args here*/
	const char *str;
	/*str literals can be passed, and there is no intent to modify them*/

	va_start(args, n);
	/*va_start starts iterating*/
	for (; i < n; i++)
	{
		str = va_arg(args, const char*);
		/*Get the next string arg*/
		/*Store the value for further use*/
	if (str != NULL)
		printf("%s", str);
	else
		printf("(nil)");
	if (separator != NULL && i < n - 1)
		printf("%s", separator);
	}
	va_end(args);
	/*clean up after retrieving args*/
	printf("\n");
}

