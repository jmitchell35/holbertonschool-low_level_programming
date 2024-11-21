#include "variadic_functions.h"
/*One header...variadic function prints uns int params separated by char */

/**
  * print_numbers - prints uns int params separated by separator char *
  * @separator: const address pointer to separator character
  * @n: const unsigned int - origin of, and number of iterations
  * Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	/*va_list turns args into iterable list called args*/

	va_start(args, n);
	/*va_start starts iterating*/
	for (; i < n; i++)
	{
		printf("%d", va_arg(args, int));

	if (separator != NULL && i < n - 1)
	{
		printf("%s", separator);
	}
	}
	/*accessing and printing each argument*/

	va_end(args);
	/*clean mup after retrieving args*/
	printf("\n");
}

