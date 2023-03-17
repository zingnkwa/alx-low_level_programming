#include <stdio.h>
/**
 * main - main function
 * Return: 0 if succefully executed
 */

int main(void)
{
	printf("size of char : %lu byte\n", sizeof(char));
	printf("Size of an int :%lu byte\n", sizeof(int));
	printf("Size of long int: %lu byte\n", sizeof(long int));
	printf("Size of long long int: %lu byte\n", sizeof(long long int));
	printf("Size of float: %lu byte\n", sizeof(float));
	return (0);
}
