#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main - entry point
*Return: int
*@argc: argument
*@argv: argument
*/
int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc != 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
