#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - entry point
  *Discription: verify if the number is positif or negatif
  *Return: always 0
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positif\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negatif\n", n);
	}
	return (0);
}
