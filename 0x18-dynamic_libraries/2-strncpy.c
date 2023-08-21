#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: pointer to buffer storing the string copy
 * @src: pointer to string to be copied
 * @n: max no of bytes being copied from src
 * Return: pointer to resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x, length_src;

	x = 0;
	length_src = 0;
	while (src[x++])
		length_src++;

	for (x = 0; src[x] && x < n; x++)
		dest[x] = src[x];

	for (x = length_src; x < n; x++)
		dest[x] = '\0';

	return (dest);
}
