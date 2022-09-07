#include "shell.h"

/**
 * print - print string to the sdtout
 * @var: string to print
 * @fd: the lengh of the string
 *
 * Return: the lengh of the string
 */
int print(char *var, int fd)
{
	return (write(fd, var, _strlen(var)));
}

/**
 * get_func - get environment function
 * @command: command to execute
 * Return: Null on success
 */
void (*get_func(char *command))(char **)
{
	int i;

	map_func map[] = {
		{"env", env},
		{"cd", ch_dir},
		{"exit", quit}
	};

	for (i = 0; i < 3; i++)
	{
		if (_strcmp(command, map[i].cmd_name)
				== 0)
			return (map[i].func);
	}
	return (NULL);
}
