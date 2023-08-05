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
	int cents = 0, money, rem1, rem2, rem3, rem4;

	if (argc == 2)
	{
		money = atoi(argv[1]);
		cents += money / 25;
		if (money % 25 == 0)
		{
			return (0);
		}
			rem1 = money % 25;
			cents += rem1 / 10;
			if (rem1 % 10 == 0)
			{
				return (0);
			}
				rem2 = rem1 % 10;
				cents += rem2 / 5;
				if (rem2 % 5 == 0)
				{
					return (0);
				}
					rem3 = rem2 % 5;
					cents += rem3 / 2;
					if (rem3 % 2 == 0)
					{
						return (0);
					}
						rem4 = rem3 % 2;
						cents += rem4;
	}
		printf("Error\n");
		return (1);
}
