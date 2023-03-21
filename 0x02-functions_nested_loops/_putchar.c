#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout 
 * @c: the character to print
 *
 * Return: returns a value on success
 * on error, -1 is reurned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
