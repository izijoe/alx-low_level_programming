#include "main.h"

/**
 * main - checks the code
 *
 * Return: Always 0
 */
int main(void)
{
	int r;

	r = _isalphabet('H');
	_putchar(r + '0');
	r = _isalphabet('o');
	_putchar(r + '0');
	r = _isalphabet(108);
	_putchar(r + '0');
	r = _isalphabet(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
