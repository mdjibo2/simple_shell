[200~Creating your own simple shell
Task 0
Compilation Your shell will be compiled this way: - gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

Task 1
Your Shell should:

Display a prompt and wait for the user to type a command. A command line always ends with a new line.

The prompt is displayed again each time a command has been executed.

The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.

The command lines are made only of one word. No arguments will be passed to programs.

If an executable cannot be found, print an error message and display the prompt again.

Handle errors.

You have to handle the “end of file” condition (Ctrl+D)

Task 2
- Handle command lines with arguments
Task 3
- Handle the PATH
- fork must not be called if the command doesn’t exist
Task 4
- Implement the exit built-in, that exits the shell
- Usage: exit
- You don’t have to handle any argument to the built-in exit
Task 5
- Implement the env built-in, that prints the current environment
