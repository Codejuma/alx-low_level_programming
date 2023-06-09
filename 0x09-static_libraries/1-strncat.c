#include "main.h"
/**
 * * _strncat - append specific number of chars
 * @dest: destination string
 * @src: source string
 * @n: number of chars appended
 * Return: Resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int span, j;

	span  = 0;
	while (dest[span] != '\0')
	{
		span++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, span++)
	{
		dest[span] = src[j];
	}
	dest[span] = '\0';
	return (dest);
}
