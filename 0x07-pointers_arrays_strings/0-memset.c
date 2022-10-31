#include "main.h"

/**
 * _memset - fills a block of memory with a specific val
 * @s: starting address of memory to be filled
 * @b: The desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for a bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int 1 = 0;

	for (i n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
