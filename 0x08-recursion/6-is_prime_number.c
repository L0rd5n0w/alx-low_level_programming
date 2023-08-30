#include "main.h"
#include <stdio.h>

int chec_prime(int n, int i);
/**
 * is_prime_number - returns if a number is a prime
 * @n: parameter
 *
 * Return:(0)always
 */
int is_prime_number(int n)
{
	return (chec_prime(n, 1));
}
/**
 * chec_prime - function
 * @n: parameter
 * @i: parameter
 * Return:(0)Always
 */
int chec_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);
	return (chec_prime(n, i + 1));
}
