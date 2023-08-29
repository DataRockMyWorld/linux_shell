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
	char **argv = NULL, *buf = NULL;
	size_t buf_size = 0;
	ssize_t buf_len;
	int count = 0, i;
	char *parsed_path = NULL;

	while (1)
	{
		count++;

		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$ ", 2);
		buf_len = _getline(&buf, &buf_size, stdin);
		if (buf_len == -1)
		{
			free(buf);
			return (errno);
		}
		argv = tokenize_buffer(buf);

		if (handle_builtin(argv, args, env) == 1)
		{
			free(argv);
			free(buf);
			return (errno);
		}
		else if (access(argv[0], F_OK) == 0)
		{
			fork_command(argv, buf, args);
		}
		else
			handle_command(argv, args, env);
	}
	free(buf);
	return (errno);
}
