#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - returns if a number is a prime
 * @n: the number to be checked
 *
 * Return: integer value
 */
int is_prime_number(int n)

{
	return (check_prime(n, n - 1));
}

/**
 * check_prime - check if the number is a prime
 * @n: the number to be checked
 * @i: the iteration times
 *
 * Return: 1 for the prime or 0 composite
 */
int check_prime(int n, int i)

{
	if (i == 0)
		return (0);

	if (n % 1 == 0 && i > 0)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i - 1));
}
