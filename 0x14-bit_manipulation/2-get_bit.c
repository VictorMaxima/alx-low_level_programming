#include "main.h"

/**
 * get_bit - gets the value of a bit at a particular index
 * @n: number
 * @index: indec
 * Return: value of a bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	b = n >> index & 1;
	return (b);
}
