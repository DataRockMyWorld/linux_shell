#include "main.h"

/**
 * _strlen - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *c)
{

	int i, count = 0;

	for (i = 0; c[i] != '\0'; i++)
	{
		count++;
	}

	return (count);
}
