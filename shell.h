#ifndef SHELL_H
#define SHELL_H

/* list of libraries */
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <dirent.h>
#include <signal.h>

/**
 * struct shell_env - stores address for pointer to free.
 * @path_values: pointer to path values
 * @input: pointer to buffer that getline creates.
 * @input_token: pointers for input token.
 * @modify_path: pointer to the path after it has been modified
 *
 * Description: provides a storage for all elements that are malloced.
 */
typedef struct shell_env
{
	char **path_values;
	char *input;
	char **input_token;
	char *modify_path;
} shell_t;


extern char **environ;

#endif
