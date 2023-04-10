#include "main.h"

/**
 * set_bit - sets a particular bit to 1
 * @n: number to modify
 * @index: index to modify
 * Return: modified number
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int m;

	m = 1 << index;
	if (index > 63)
		return (-1);
	*n |= m;
	return (1);
}
