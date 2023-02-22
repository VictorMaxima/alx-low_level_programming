#include "main.h"
#include <unistd.h>
/**
* _islower - checks if a letter is lowercase
* @c:- char to be checked
* Return: 1 if true, 0 otherwise
*/
int _islower(int c)
{
	if (c  <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
