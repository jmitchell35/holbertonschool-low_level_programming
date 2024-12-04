 #include "main.h"
/**
  * flip_bits - ret nb of bits you'd need to flip to get from one nb to another
  * @n: unsigned long int, first number for binary rep comparison
  * @m: unseigned long int, second number
  * Return: unsigned int, nb of differences
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor_result = n ^ m;
	/*Result is binary where 1 marks difference between n and m bin reps*/
	unsigned int diff_count = 0;
	/*We count 1, i.e. differencies, iterating down that binary string*/

	while (xor_result) /*Iterating down the string, as long as > 0*/
	{
		diff_count += xor_result & 1;
		/**
		  * 1 is a bit mask and reference for comparison
		  * If bit is 1 at position on xor_result string,
		  * & operator output is one, hence xor_count is incremented
		  */
		xor_result >>= 1;
		/**
		  * Right shift ~ div by two - removes one bit from the left
		  * Allows "decrementing", continue looking for 1s down the str
		  */
	}
	return (diff_count);
}
