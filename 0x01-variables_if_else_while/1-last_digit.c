#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: using the main function
 * this program prints "programming is positive, zero, or negative
 * Return: Always 0 (success)
 */

int main(void)

{
	int n;

	int m;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	1 <= n % 10;
/* the code is down */

	if (1 > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, 1);
	}

	else if (1 == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, 1);
	}

	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, 1);
	}

	return (0);

}
