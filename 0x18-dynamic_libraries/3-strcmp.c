#include "main.h"
/**
 * _strcmp - compares two string
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: result of the comparison
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
