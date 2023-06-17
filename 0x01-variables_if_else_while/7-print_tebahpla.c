#include <stdio.h>
/**
  *main - entry point
  *Description: print lowercase alphabets  in reverse
  *Return: always 0
  */
int main(void)
{
	int n = 122;

	while (n > 96)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
