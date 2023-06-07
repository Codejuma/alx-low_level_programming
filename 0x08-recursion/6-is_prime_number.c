#include "main.h"
/**
 * divisibility - check the divisibility of a number
 * @n: number being checked
 * @div: divisor
 * Return: 0 if divisible otherwise -1
 */
int divisibility(int n, int div)
{
	if (n % div == 0)
		return (0);
	if (div == n / 2)
		return (1);
	return (divisibility(n, div + 1));
}
/**
 * is_prime_number - determines prime number
 * @n: input number
 * Return: 1 if prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (divisibility(n, 2));
}
