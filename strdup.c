#include "main.h"

/**
 * _strdup - duplicates string
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strdup(char *s)
{
	int i, len = 0;
	char *dup = NULL;

	len = _strlen(s);
	dup = malloc(sizeof(char *) * len);

	len = _strlen(s);
	dup = malloc(sizeof(char *) * len);

	if (dup == NULL)
		return (NULL);
	for (i = 0; s[i] != '\0'; i++)
		dup[i] = s[i];
	dup[i] = '\0';

	return (dup);
}
