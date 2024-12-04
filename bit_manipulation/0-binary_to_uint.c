#include "main.h"
/**
  * binary_to_uint - converts a binary to an unsigned int
  * @b: constant ptr to a string of 0 and 1 chars
  * Return: Converted number, 0 if other char than 0/1 in str, 0 if b is null
  */
unsigned int binary_to_uint(const char *b)
{
	const char *start_mark = b;
	unsigned int binary = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b < 48 || *b > 49)
			return (0);
		b++;
	}
	while (*start_mark)
	{
		binary = binary * 2;
		binary += *start_mark - '0';
		start_mark++;
	}
	return (binary);
}
