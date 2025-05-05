#include "_putchar.h"
/**
* print_alphabet - function definition
* 
* Return: void
*/
void print_alphabet(void)
{
	int a = 97;

	while (a < 123)
	{
		_putchar(a);
		a++;
	}
	_putchar(10);
	return;
}
