#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert string to interger
 * @s: pointer to string
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int index, i;
	unsigned int res;
	int sign = 1;
	char even;


	index = 0;
	res = 0;
	while (*(s + index) != '\0')
	{
		even = *(s + index);
		if (even == '-')
		{
			sign *= -1;
		}
		if (even >= '0' && even <= '9')
		{
			i = index;
			while (*(s + i) > 47 && *(s + i) < 58)
			{
				res = (res * 10) + *(s + i) - '0';
				i++;
			}
			break;
		}
		index++;
	}
	if (sign < 0)
		res *= sign;
	return (res);
}
