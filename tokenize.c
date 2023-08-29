#include "main.h"

char **tokenize_buffer(char *s)
{
	char **toks = NULL;
	int num = 0;
	char *token = NULL, *delimiter = " \n";

	toks = malloc(sizeof(char *) * 25);
	if (toks == NULL)
		return (NULL);

	token = strtok(s, delimiter);

	while (token != NULL)
	{
		toks[num] = token;
		token = strtok(NULL, delimiter);
		num++;
	}

	toks[num] = NULL;
	return (toks);
}