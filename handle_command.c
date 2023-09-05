#include "main.h"

int handle_command(char **argv, char **args, char **env, int tally)
{
    char *parsed_cmd = NULL;

    parsed_cmd = handle_path(argv[0], env);

    if (parsed_cmd == NULL)
        return (-1);
    fork_process(argv, args, parsed_cmd, env);
    free(argv);
    free(parsed_cmd);
    return (1);
}