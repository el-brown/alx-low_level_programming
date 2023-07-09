#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *main - entry point
  *Return: 1 if ther is an error and 0 if all is right
  *@argc: argument counter
  *@argv: argument value
  */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int money = atoi(argv[1]), i, j = 0;
		int cent[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (money >= cent[i])
			{
				j += money / cent[i];
				money = money % cent[i];
				if (money % cent[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", j);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
