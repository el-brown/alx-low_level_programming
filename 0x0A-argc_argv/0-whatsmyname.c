#include "main.h"
#include <stdio.h>
/**
  *whatsmyname - prints program naame
  *Return: always 0
  *@argc: argument
  *@argv: argument
  */
int whatsmyname(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
