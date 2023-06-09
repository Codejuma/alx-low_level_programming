#include"main.h"
/**
 * _strcat - appends content from one str to another
 * @dest: destination string
 * @src: source string
 * Return: the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int jay, j;

	jay = 0;
	while (dest[jay] != '\0')
	{
		jay++;
	}
	for (j = 0; src[j] != '\0'; j++, jay++)
	{
		dest[jay] = src[j];
	}
	dest[jay] = '\0';
	return (dest);
}
