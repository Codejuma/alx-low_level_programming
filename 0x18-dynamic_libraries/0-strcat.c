#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to first string
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int span, x;

	span = 0;
	while (dest[span] != '\0')
	{
		span++;
	}
	for (x = 0; src[x] != '\0'; x++, span++)
	{
		dest[span] = src[x];
	}
	dest[span] = '\0';
	return (dest);
}
