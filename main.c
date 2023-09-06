#include "main.h"

/**
 * main - Main shell core
 * @argc: count of arguments
 * @argv: input string
 * @env: environmental variable
 *
 * Return errno on success
 */

int main(int argc, char **args, char **env)
{
	char **argv = NULL, *buf = NULL, value;
	size_t buf_size = 0;
	ssize_t buf_len;
	int tally = 0, i;
	char *parsed_path = NULL;

	errno = 0;

	while (1)
	{
		tally++;

		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$ ", 2);
		buf_len = _getline(&buf, &buf_size, stdin);
		if (buf_len == -1)
		{
			free(buf);
			continue;
		}
		argv = tokenize_buffer(buf);

		if (handle_builtin(argv, args, env) == 1)
		{
			continue;
		}
		/*
		else if (access(argv[0], F_OK) == 0)
		{
			fork_direct(argv, args, env);
			continue;
		}
		
		else if (handle_command(argv, args, env) == -1)
		{
			value = tally + '0';
			error_command(args[0], value, argv[0]);
			free(buf);
		}
		*/
	}
	return (errno);
}
