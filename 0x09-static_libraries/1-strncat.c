#include "main.h"
/**
 * *_strncat - concatinates two strings
 *Return: char
 *@dest: argument
 *@src: argument
 *@n: argument
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
