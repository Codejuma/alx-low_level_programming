#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure, otherwise pass
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int siz1, siz2;
	char *ptr, *ret;

	siz1 = 0;
	siz2 = 0;
	ptr = s1;
	if (s1)
		while (*ptr++)
			siz1++;
	else
		s1 = "";
	ptr = s2;
	if (s2)
		while (*ptr++)
			siz2++;
	else
		s2 = "";
	ret = malloc(siz1 + siz2 + 1);
	if (!ret)
		return (NULL);
	ptr = ret;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = 0;
	return (ret);
}
