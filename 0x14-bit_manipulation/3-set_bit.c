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

	m = *n;
	if (m >> index && 1)
		return (1);
	*n += 1 << index;
	return (1);
}
