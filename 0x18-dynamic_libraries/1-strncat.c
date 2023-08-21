#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to first string
 * @n: numbers of bytes being concatenated
 * Return: pointer to resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int span, x;

	span = 0;
	while (dest[span] != '\0')
	{
		span++;
	}
	for (x = 0; x < n && src[x] != '\0'; x++, span++)
	{
		dest[span] = src[x];
	}
	dest[span] = '\0';
	return (dest);
}
