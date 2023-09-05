
#include "main.h"

/**
 * parse_error - Checks error on parsed commandt
 * @argv: Argument counter
 * @args: Argument Vector
 * @tally: integer
 *
 * Return: Errno
 */
int parse_error(char **argv, char **args, int tally)
{
	char cv;

	cv = (tally + '0');
	error_command(argv[0], cv, args[0]);
	free(argv);
	errno = 127;

	return (errno);
}
