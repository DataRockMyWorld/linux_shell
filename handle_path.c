#include "main.h"
/**
 * handle_path - Handle the shell pathway
 * @comnd: Argument
 * Return: Always 0.
 */
char *handle_path(char *comnd, char **env)
{
	char *route, *route_cpy, *file_route, *toks;
	int comnd_len, dir_len;
	const char *delim = ":";
	struct stat storage;

	route = _getenv("PATH", env);
	if (route)
	{
		route_cpy = _strdup(route);
		comnd_len = _strlen(comnd);
		toks = strtok(route_cpy, delim);
		while (toks)
		{
			dir_len = _strlen(toks);
			file_route = malloc(comnd_len + dir_len + 2);
			if (!file_route)
			{
				perror("Memory allocation failed");
				free(route_cpy);
				return (NULL);
			}
			_strcpy(file_route, toks);
			_strcat(file_route, "/");
			_strcat(file_route, comnd);
			if (stat(file_route, &storage) == 0)
			{
				free(route_cpy);
				return (file_route);
			}
			else
			{
				free(file_route);
				toks = strtok(NULL, delim);
			}
		}
		free(route_cpy);
		if (stat(comnd, &storage) == 0)
			return (_strdup(comnd));
	}
	return (NULL);
}
