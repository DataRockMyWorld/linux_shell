#include "main.h"
/**
* error_command - Prints custom erro message to standard error
* @prog: Program name
* @count: Command count
* @command: Command entered by user
* Return: Void
*
*/

void error_command(char *prog, int count, char *command)
{
	put_string(prog);
	put_string(": ");
	_putchar(count);
	put_string(": ");
	put_string(command);
	put_string(": not found\n");
}

/**
* put_string - prints a given string
* @str: String to be printed
*
* Return: Void
*/

void put_string(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}

/**
* _putchar - Prints a character to standard error
* @c: Character to be printed
*
* Return: An integer
*/

int _putchar(char c)
{
	return (write(2, &c, 1));
}
