#include "main.h"
/**
  * get_bit - returns value of bit at given index
  * @n: unsigned long int, number
  * @index: n's binary representation's index to look at
  * Return: int, value of index bit, -1 is error
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	/**
	  * No iteration needed : we know the desired index.
	  * Hence we know how many left shifts we need to make.
	  * != 0 is boolean conversion :
	  * Returns 1 if true (bit set to 1), 0 if false (bit is 0)
	  */
	return ((n & (1 << index)) != 0);
}
