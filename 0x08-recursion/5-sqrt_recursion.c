#include "main.h"

/**
 * helperfunction - checks if sqrt of number exist
 * @num: input number
 * @psqrt: possible sqrt of number
 *
 * Return: squareroot of number or -1 for error
 */
int helperfunction(int num, int psqrt)
{
	if ((psqrt * psqrt) == num)
	{
		return (psqrt);
	}
	else
	{
		if ((psqrt * psqrt) > num)
			return (-1);
		else
			return (helperfunction(num, psqrt + 1));
	}
}
