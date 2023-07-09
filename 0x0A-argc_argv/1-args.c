#include "main.h"
#include <stdio.h>
/**
  *main - entry point
  *Return: always 0
  *@argc: argument couter
  *@argv: argument value
  */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return(0);
}
