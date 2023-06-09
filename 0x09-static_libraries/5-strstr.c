#include <stdio.h>
#include "main.h"
/**
 * *_strstr - locate substring
 * @haystack: string to search
 * @needle: string to look for
 * Return: beggining of located substring otherwise NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int j, k;

	for (j = 0; haystack[j] != '\0'; j++)
	{
		for (k = 0; needle[k] != '\0'; k++)
		{
			if (haystack[j + k] != needle[k])
				break;
		}
		if (!needle[k])
			return (&haystack[j]);
	}
	return (NULL);
}
