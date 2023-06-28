#include "main.h"
/**
  *_atoi - convert string to an integer
  *Return: int
  *@s: argument
  */
int _atoi(char *s)
{
	int a = 0, b = 1, c = 0;
	unsigned int n = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			b *= -1;
		}
		while (s[a] >= 48 && s[a] <= 57)
		{
			c = 1;
			n = (n * 10) + (s[a] - '0');
			a++;
		}
		if (c == 1)
		{
			break;
		}
		a++;
	}
	n *= b;
	return (n);
}
