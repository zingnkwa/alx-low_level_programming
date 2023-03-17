#include <stdio.h>
#include <unistd.h>
/**
 * main - a program that prints a line to a std error
 * Return: always return 1
 */
int main(void)
{
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
