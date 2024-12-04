#include "main.h"
/**
  * set_bit - sets bit at given index
  * @n: ptr to unsigned long int, number to operate bit manipulation on
  * @index: unsigned int, index of bit to set
  * Return: int, 1 (success) or -1 (error)
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	/*If is true means index is out of range*/
	*n |= (1 << index);
	/**
	  * No iteration needed : we know the desired index.
	  * Hence we know how many left shifts we need to make for a bit mask
	  * Either position is already 1, or it is set to 1
	  * Safe operation : no check needed
	  */
	return (1);
}
