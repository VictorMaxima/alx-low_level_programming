#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: number to be printed
 * Return: none
 */

void print_binary(unsigned long int n)
{
	int bits, bit, flag;

	bits = sizeof(n) * 8;
	flag = 0;
	for (bits--; bits >= 0; bits--)
	{
		bit = n >> bits & 1;
		if (bit == 1)
			flag = 1;
		if (flag)
			_putchar(bit + 48);

	}
	_putchar(10);
}
