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


ssize_t _getline(char **lineptr, size_t *n, FILE *stream);
char **tokenize_buffer(char *s);
int _strlen(char *c);
int handle_command(char **argv, char **args, char **env);
char *_strdup(char *s);
int _strncmp(const char *s1, const char *s2, size_t n);
int fork_command(char **argv, char *buf, char **args);
#endif
