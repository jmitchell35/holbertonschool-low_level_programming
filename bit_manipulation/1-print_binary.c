#include "main.h"
/**
  * print_binary - prints binary representaiton of a number
  * @n: unsigned long int, number whose binary representation is to be printed
  * Return: void
  */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	/**
	  * UL is compiler command to treat 1 as unsigned long int
	  * MSB location depends on machine architecture (64-bit, 32-bit)
	  * and data type : hence the dynamically defined nb of left shifts
	  * We need this as a comparison with n's binary representation
	  * Starting from MSB ensures binary representation is in correct order
	  * Correct order is left to right -> here is for the left shifting
	  * Use recursion otherwise and heap's LIFO behavior
	  */
	int one_flag = 0; /*turns to 1 when 1 has been met on n's binary rep*/
	/*Because we don't want to print any zeros before the first 1*/

	while (mask > 0)
	{
		if (n & mask) /*both n and mask bits are one*/
		{
			_putchar('1');
			one_flag = 1;
		}
		else if (one_flag)
			_putchar('0');
		mask >>= 1;
		/**
		  * Shift one position back to the right
		  * Used as loop decrementation : shifting right ends up
		  * turning mask to 63 zeros, = 0
		  */
	}
	if (!one_flag) /* true if no 1 has been flagged, hence n is 0*/
		_putchar('0');
}
