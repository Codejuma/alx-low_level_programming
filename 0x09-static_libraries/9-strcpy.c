#include "main.h"
/**
 * _strcpy - copy string at theendofanother string
 * @dest: destination string
 * @src: source string
 *
 * Return: to the destination
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
