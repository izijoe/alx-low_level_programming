#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	printf("Size of a char: %i 1 byte(s)\n", sizeof(char));
	printf("size of an int: %i 4 byte(s)\n", sizeof(int));
	printf("size of a long int: %i 4 byte(s)\n", sizeof(long int));
	printf("size of a long long int: %i 8 byte(s)\n", sizeof(long long int));
	printf("size of a float: %i 4 byte(s)\n", sizeof(float));
	return (0);
}
