#include <stdio.h>
/* Fizz Buzz test */

/**
* main - Entry point
*
*
* Return: always 0 (success)
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 != 0)
		printf("%s", "Fizz");
	else if (i % 5 == 0 && i % 3 != 0)
		printf("%s", "Buzz");
	else if (i % 5 == 0 && i % 3 == 0)
		printf("%s", "FizzBuzz");
	else
		printf("%d", i);

	if (i != 100)
		printf(" ");
	}
	printf("\n");
	return (0);
}
