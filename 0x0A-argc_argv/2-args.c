#include "main.h"
#include <stdio.h>
/**
  *main - entry point
  *Return: always 0
  *@argc: argument counter
  *@argv: argument value
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
