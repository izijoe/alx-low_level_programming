#include "main.h"

/**
 * is_prime_number - checks if number is prime or not
 * @n: number to be checked
 *
 * Return: 1 if number is prime
 * 0 if number is not prime
 */
int is_prime_number(int n)
{

	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperfunction(n, 2));
	}
}
