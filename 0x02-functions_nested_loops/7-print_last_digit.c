#include "main.h"
/**
  *print_last_digit - function that prints the last digit f an int
  *Return: m
  *@n: the argument
  */
int print_last_digit(int n)
{
	int m;

	m = (n % 10);
	_putchar(m + 48);
	return (m);
}