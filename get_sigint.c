#include "holberton.h"

/**
 * aaaaaaaaa
 */
void get_sigint(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n^-^ ", 5);
}
