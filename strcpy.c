#include "main.h"

/**
 * *_strcpy - writs the character c to stdout
 * @dest: The character to print
 * @src: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int j = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; j < l ; j++)
	{
		dest[j] = src[j];
	}
	dest[l] = '\0';
	return (dest);
}
