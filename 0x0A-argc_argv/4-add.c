#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: command line arguments
 * @argv: array containing program
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int j, k, add = 0;

	for (j = 1; j < argc; j++)
	{
		for (k = 0; argv[j][k] != '\0'; k++)
		{
			if (!isdigit(argv[j][k]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[j]);
	}
	printf("%d\n", add);
	return (0);
}
