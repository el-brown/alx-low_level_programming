#include <stdio.h>
/**
  *main - fibonacci
  *Return: 0
  */
int main(void)
{
	int i;
	long a = 1;
	long b = 2;
	long f;

	printf("%lo, %lo, ", a, b);
	for (i = 0; i < 48; i++)
	{
		f = a + b;
		a = b;
		b = f;
		if (i != 49)
		{
			printf("%lo, ", f);
		}
		else
		{
			printf("%lo\n", f);
		}
	}
	return (0);
}
