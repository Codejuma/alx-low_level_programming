#include "main.h"
/**
 * _strncpy - cpy a string
 * @dest: buffer storage
 * @src: string source
 * @n: bytes copied from source
 * Return: Result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j, length_src;

	j = 0;
	length_src = 0;
	while (src[j++])
		length_src++;

	for (j = 0; src[j] && j < n; j++)
		dest[j] = src[j];

	for (j = length_src; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
