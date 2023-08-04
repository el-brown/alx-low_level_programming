#include "main.h"
/**
  *_isdigit - checks fora digit
  *Return: 1 if c is a digit otherwis 0
  *@c: is an argument
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
