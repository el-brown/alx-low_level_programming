#include "main.h"
/**
  *_isupper - checks if the variable is upper case
  *Return: 1 if c is uppercase o otherwise
  *@c: argument
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
