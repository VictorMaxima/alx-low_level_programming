#include "main.h"

/**
 * clear_bit - sets a particular bit to zero
 * @n: number to be modofied
 * @index: index of bit to be modified
 * Return: modified number
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int m;

	m = *n;
	if (index > 63)
		return (-1);
	if (m >> index && 1)
		*n -= 1 << index;
	return (1);
}
