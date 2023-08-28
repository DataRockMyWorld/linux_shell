#include "main.h"

/**
 * main - Main shell core
 * @argc: count of arguments
 * @argv: input string
 * @env: environmental variable
 *
 * Return errno on success
 */

int main(int argc, char **args, chr **env)
{
	char **argv = NULL, **buf_len = NULL;
	size_t buf_size = 0;
	int count = 0;
	char *parsed_path = NULL;

	while (1)
	{
		count++;

		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$ ", 2);
		buf_len = getline(buf, &buf_size, stdin);
		if (buf_len == -1)
		{
			free(buffer);
			return (errno);
		}

		argv = tokenize_buffer(buf);

		if (handle_builtin(argv, env) == 1)
		{
			free(argv);
			free(buf);
			return (errno);
		}
		if (access(argv[0], X_OK) == -1)
		{
			parsed_path = handle_path(argv, env);
		}
		fork_command(argv, buf, args);
			  
	  (argv, buf, env);
		}
			

	}
	return (errno);
}
