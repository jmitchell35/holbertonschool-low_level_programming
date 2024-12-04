#include "main.h"
/**
  * clear_bit - clears bit at given index
  * @n: ptr to unsigned long int, number to operate bit manipulation on
  * @index: unsigned int, index of bit to clear
  * Return: int, 1 (success) or -1 (error)
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	/*If is true means index is out of range*/
	*n &= ~(1 << index);
	/**
	  * No iteration needed : we know the desired index.
	  * Hence we know how many left shifts we need to make for a bit mask
	  * Either both positions are not 1 (& + ~), or bit is cleared to 0
	  * Safe operation : no check needed
	  */
	return (1);
}
