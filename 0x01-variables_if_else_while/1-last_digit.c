#include <stdlib.h>
#include <time.h>
/* more headers goes there */

#include <stdio.h>

/* betty style doc for function main goes there */
/**
* main - Entry point
*
* Return: Always 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int l;

	l = n % 10;
	printf("Last digit of %d is %d ", n, l);
	if (n > 5)
		printf("and is greater than 5\n");
	if (n == 0)
		printf("and is 0\n");
	else if (n < 6)
		printf("and is less than 6 and not 0\n");
	return (0);
}
