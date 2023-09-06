#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stddef.h>
#include <limits.h>


ssize_t _getline(char **lineptr, size_t *n, FILE *stream);
char **tokenize_buffer(char *s);
int _strlen(char *c);
int handle_command(char **argv, char **args, char **env);
char *_strdup(char *s);
int _strncmp(const char *s1, const char *s2, size_t n);
char *handle_path(char *comnd, char **env);
char *_getenv(const char *name, char **env);
int parse_error(char **argv, char **args, int tally);
int fork_direct(char **argv, char **args, char **env);
int fork_process(char **args, char **argv, char *fullcmd, char **env);
char **str_tok(char *str, char d);
void error_command(char *prog, int count, char *command);
void put_string(char *str);
int _putchar(char c);

char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);

int handle_builtin(char **argv, char **args, char **env);
int builtin_env(char **argv, char **env);
int builtin_cd(char **argv, char **env);
int builtin_exit(char **argv, char **env);

#endif