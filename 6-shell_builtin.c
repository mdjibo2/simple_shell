#include "shell.h"

/**
* env - get environment variables
* @command: string
*/
void env(char **command __attribute__((unused)))
{
	int i = 0;

	while (environ[i])
	{
		print(environ[i++], STDOUT_FILENO);
		print("\n", STDOUT_FILENO);
	}
}

/**
* quit - exit the prompt
* @command: string of command
*/
void quit(char **command)
{
	(void) command;
}

/**
* ch_dir - change directory
* @command: string of command
*/
void ch_dir(char **command)
{
	(void) command;
}
