#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: evaluated string
 * @accept: result string
 * Return: initial string segment bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int j, k, flag;
	unsigned int l = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		flag = 0;
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[j] == accept[k])
			{
				l++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (l);
		}
	}
	return (l);
}
