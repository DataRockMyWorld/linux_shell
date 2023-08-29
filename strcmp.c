#include "main.h"

/**
 * int *_strcmp - writes the character c to stdout
 * @s1: The character to print
 * @s2: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strcmp(char *s1, char *s2)
{
	int i, exit = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			exit = 1;
			break;
		}
	}

	if (exit == 0)
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
