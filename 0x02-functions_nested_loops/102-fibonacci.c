#include <stdio.h>
/**
  *main - fibonacci
  *Return: 0
  */
int main(void)
{
	int i;
	long a = 0;
	long b = 1;
	long f;

	for (i = 0; i < 50; i++)
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
