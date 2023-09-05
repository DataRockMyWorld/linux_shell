#include "main.h"


int builtin_env(char **argv, char **env)
{
    int i = 0, j = 0;

    (void)argv;

    while (env[i])
    {
        while (env[i][j])
        {
            write(STDOUT_FILENO, &env[i][j], 1);
            j++;
        }
        j = 0;
        i++;
        write(STDOUT_FILENO, "\n", 1);
    }
    return (1);
}



int builtin_exit(char **argv, char **env)
{
    (void)env;

    errno = 0;

    if (argv[1] == NULL)
        return (errno);
    return (errno);
}

int builtin_cd(char **argv, char **env)
{
    return 0;
}
