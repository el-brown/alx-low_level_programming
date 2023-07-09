#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *main - entry point
  *Return: 1 if there is an error and 0 if all is good
  *@argc: argument counter
  *@argv: argument value
  */
int main(int argc, char *argv[])
{
	int i = 0;
	char *p;

	while (--argc)
	{
		for (p = argv[argc]; *p; p++)
		{
			if (*p < '0' || *p > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		i += atoi(argv[argc]);
	}
	printf("%d\n", i);
	return (0);
}
