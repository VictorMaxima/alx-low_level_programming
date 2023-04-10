#include "main.h"

/**
 * flip_bits -finds the number of bits you need to flip to 
 * go from a number to another
 * @n: first number
 * @m: second number
 * Return: number of bits that need to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numbits;

	for (numbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) ^ (m & 1))
			numbits++;
	}
	return (numbits);
}
