#include "variadic_functions.h"
/*One header to rule them all - variadic function prints sum of parameters */

/**
  * sum_them_all - function : prints sum of its parameters
  * @n: const unsigned int - last known arg to iterate from
  * Return: sum of parameters, 0 if n == 0
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list args;
	/*va_list turns args into iterable list called args*/

	if (n == 0)
		return (0);

	va_start(args, n);
	/*va_start starts iterating*/
	for (; i < n; i++)
		sum += va_arg(args, int);
	/*accessing each argument*/

	va_end(args);
	/*clean mup after retrieving args*/

	return (sum);
}

