#include "main.h"
/**
* print_diagonal - draws a diagonal
* @n: how many lines to print
* Return: no return
*/

void print_diagonal(int n)
{
	int m;

	for (m = 1; m <= n; m++)
	{
		while (m > 1)
		{
			_putchar(' ');
		}
		_putchar('\');
		_putchar(10);
	}
	if (n < 1)
		_putchar(10);
}
