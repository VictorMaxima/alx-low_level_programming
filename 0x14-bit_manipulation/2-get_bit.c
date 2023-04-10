#include "main.h"

/**
 * get_bit - gets the value of a bit at a particular index
 * @n: number
 * @index: indec
 * Return: value of a bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (n == 0 && index < 64)
		return (0);
	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}
	return (-1);
}
