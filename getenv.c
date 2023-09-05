#include "main.h"
/**
* _getenv - writs the character c to stdout
* @name: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

char *_getenv(const char *name, char **env)
{
	int i;
	const char *sign;

	if (name == NULL)
	{
		return (NULL);
	}

	for (i = 0; env[i] != NULL; i++)
	{
		if (strncmp(env[i], name, strlen(name)) == 0)
		{
			sign = strchr(env[i], '=');

			if (sign)
				return ((char *)(sign + 1));
		}
	}
	return (NULL);
}
