#include "main.h"
#include <unistd.h>
/**
* print_alphabet_x10 - prints the alphabet 10 rimes
* Return: Always 0
*/

void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 97; j < 123; j++)
			_putchar(j);
		_putchar(10);
	}
}
