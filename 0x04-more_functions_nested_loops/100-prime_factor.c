#include <stdio.h>
#include "main.h"

/**
 * main - Prints the largest prime factor of the master 612852475143
 * Return: Always 0 (success)
 */

int main(void)

{

	long x, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = i; x <= square; x++)
	{
	if (number % x ==0)
	{
	maxf = number / x;
	}
	}
	printf("%ld\n", maxf);
	return (0);
}
