#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives
 * @argv: array of arguments
 * @argc: number of argument
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}

	return (0);
}
