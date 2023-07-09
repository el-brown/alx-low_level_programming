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
	int i;

	if (argc == 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
