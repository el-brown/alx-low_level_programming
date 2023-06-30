#include "main.h"
/**
 * *_strncat - concatinates two strings
 *Return: char
 *@dset: argument
 *@src: argument
 *@n: argument
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	
	while (dset[i++])
	{
		j++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dset[j++] = src[i];
	}
	return (dest);
}

