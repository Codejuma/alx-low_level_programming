#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: unsigned long int
 * @index: bit index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int j;

	if (index > 63)
		return (-1);

	j = 1 << index;

	if (*n & j)
		*n ^= j;

	return (1);
}
