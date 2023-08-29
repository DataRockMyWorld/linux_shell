#include "main.h"

/**
* _getline - stores a string from standard input into a buffer
* @lineptr: The character to print
* @n: length of ptr
* @file: input file
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

ssize_t _getline(char **lineptr, size_t *n, FILE *file)
{
	static size_t buffer_size;
	size_t i = 0;
	int c;

	if (lineptr == NULL || n == NULL)
	return (-1);
	if (*lineptr == NULL || *n == 0)
	{
	*n = 1024;
	*lineptr = (char *)malloc(*n);
	if (*lineptr == NULL)
	{
		return (-1);
	}
	buffer_size = *n;
	}
	while (read(fileno(file), &c, 1) > 0)
	{
	if (i >= *n - 1)
	{
		*n = buffer_size * 2;
		*lineptr = realloc(*lineptr, *n);
		if (*lineptr == NULL)
		{
			return (-1);
		}
		buffer_size = *n;
	}
	(*lineptr)[i++] = c;
	if (c == '\n')
	{
		break;
	}
	}
	if (i == 0)
	{
	return (-1);
	}
	(*lineptr)[i] = '\0';
return (i);
}