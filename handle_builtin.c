# include "main.h"

int handle_builtin(char **argv, char **args, char **env)
{
    char *builtin[] = {"exit", "cd", "env"};
    int (*bin_ptr[])(char **, char **) = {&builtin_exit, &builtin_cd, &builtin_env};
    int i;

    if (argv[0] == NULL)
        return (-1);

    for (i = 0; i < _strlen(builtin[2]); i++)
    {
        if (strcmp(argv[0], builtin[i]) == 0)
        {
            return ((bin_ptr[i])(argv, env));
        }
    }
    return (-1);
}