#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints last digit of random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */

int main(void)

/* main returns a void int*/

{

		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;

		if (n > 5)

		{
			printf("last digit of n is %d and is greater than 5\n", n);

		}

		else if (n == 0)

		{
			printf("last digit of n is %d and is 0\n", n);

		}

		else if (n < 6)
		{
			printf("last digit of n  is %d and is less than 6 not 0\n", n);

		}
/* returns o*/
		return (0);

}
