#include <stdio.h>
/**
* main - function that prints a sum of numbers
* Return: 0
*/
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
		else
		{
			continue;
		}
	}
	printf("%d\n", sum);
}
