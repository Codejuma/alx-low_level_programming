#include <stdio.h>
#include "main.h"
/**
 * _isalpha - determines if input is a letter
 * @c: ASCII code character
 * Return: 1 if letter, otherwise 0
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
