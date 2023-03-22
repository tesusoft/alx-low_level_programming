#include <unistd.h>

/**
*_putchar - writes the character c to stdout
*followed by a new line \n
*@c: The character to print
*
*Return: 1 on success
* On error, -1 is returned
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
