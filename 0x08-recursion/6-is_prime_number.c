#include "main.h"
/**
 * is_prime_number - verify if n is a prime num
 * Return: int
 * @n: argument
 * @i: argument
 */
int modulo(int n, int i);
int is_prime_number(int n)
{
	return (modulo(n, 2));
}
/**
 * modulo - calculates the modulo of a division
 * Return: int
 * @n: argument
 * @i:argument
 */
int modulo(int n, int i)
{
	if (i >= n && n > 1)
	{
		return (1);
	}
	else if (n % i == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (modulo(n, i + 1));
	}
}
