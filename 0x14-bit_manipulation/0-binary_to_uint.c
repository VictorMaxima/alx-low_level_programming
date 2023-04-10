#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts from binary to integer
 * @b: number to be converted to integer
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number;
	int i, j, k;

	if (b == NULL)
		return (0);
	i = 0;
	for (j = 0; *(b + j) != '\0'; j++)
	{
		if (*(b + j) != '1' && *(b + j) != '0')
			return (0);
	}
	number = 0;
	for (j--; j >= 0; j--)
	{
		k = (*(b + j)) - 48;
		number += k << i;
		i++;
	}
	return (number);
}
