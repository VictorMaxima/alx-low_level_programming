#include "main.h"
#include <unistd.h>
/**
* jack_baeur - prints every minute of the day
* Return: always void
*/
void jack_baeur(void)
{
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 61; j++)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			_putchar(':');
			_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			_putchar(10);
		}
	}
}
