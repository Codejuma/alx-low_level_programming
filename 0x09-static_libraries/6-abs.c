#include "main.h"
#include <stdio.h>
/**
 * _abs - input absolute value of an integer
 * @n: integer value
 * Return: absolute value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
