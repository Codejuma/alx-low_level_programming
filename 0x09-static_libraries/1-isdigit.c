#include "main.h"
/**
 * _isdigit - check if the given char is a digit
 * @c: given character
 * Return: 1 if digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
