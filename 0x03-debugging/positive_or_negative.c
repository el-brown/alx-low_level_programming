#include "main.h"
/**
  *main - entry point
  *Discription: verify if the number is positif or negatif
  *Return: always 0
  */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
