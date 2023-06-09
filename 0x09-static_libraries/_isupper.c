#include "main.h"
/**
 * _isupper - uppecase letters
 * @c: provided alphabet
 * Return: if uppercase 1 otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
