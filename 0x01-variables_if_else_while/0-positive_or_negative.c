/*
 * File: 0-positive_or_negative.c
 * Auth: MobolajiWeaver
 */
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 *    Description: Prints a random number  and states whether
 *                 it is positive, or negative, or zero.
 *
 *    Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        if ( n > 0 )
		printf("%d is positive\n", n);
	else if ( n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
