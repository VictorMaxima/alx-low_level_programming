#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: number to be printed
 * Return: none
 */

void print_binary(unsigned long int n)
{
	int b;

	while (n != 0)
	{
		b = n & 1;
		_putchar(b + 48);
		n >>= 1;
	}
}
