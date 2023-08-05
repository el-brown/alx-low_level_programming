#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main - entry point
*Return: 0 if true 1 if false
*@argc: argument
*@argv: argument
*/
int main(int argc, char **argv)
{
	int x, y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
		return (0);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
}
