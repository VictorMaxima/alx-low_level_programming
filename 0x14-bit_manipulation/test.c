#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//unsigned int n;
	//n = binary_to_uint("10");
	//printf("%d", n);
	print_binary(8);
	int b = get_bit(1024, 10);
	_putchar(b + 48);
	_putchar(10);
	unsigned long int i = 0;
	set_bit(&i, 10);
	printf("%lu\n", i);
	clear_bit(&i, 10);
	printf("%lu\n", i);
}
