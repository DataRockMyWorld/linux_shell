#include "main.h"

int handle_command(char **argv, char **args, char **env)
{
    char *parsed_cmd = NULL;

    parsed_cmd = handle_path(argv[0], env);

    if (parsed_cmd == NULL)
        return (-1);

    fork_process(argv, args, parsed_cmd, env);
    return (1);
}