#include "holberton.h"

/**
 * cmp_aaaaaaaaaaaaaaaaaaaaaa
 */
int cmp_env_name(const char *nenv, const char *name)
{
	int i;

	for (i = 0; nenv[i] != '='; i++)
	{
		if (nenv[i] != name[i])
		{
			return (0);
		}
	}

	return (i + 1);
}

/**
 * _geteaaaaaaaaaaaaaaaaaaaaaaa
 */
char *_getenv(const char *name, char **_environ)
{
	char *ptr_env;
	int i, mov;

	/* Iaaaaaaaaaaaaaa */
	ptr_env = NULL;
	mov = 0;
	/* Compa */
	/* environ file */
	for (i = 0; _environ[i]; i++)
	{
		/* Ial */
		mov = cmp_env_name(_environ[i], name);
		if (mov)
		{
			ptr_env = _environ[i];
			break;
		}
	}

	return (ptr_env + mov);
}

/**
 * _envaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
 */
int _env(data_shell *datash)
{
	int i, j;

	for (i = 0; datash->_environ[i]; i++)
	{

		for (j = 0; datash->_environ[i][j]; j++)
			;

		write(STDOUT_FILENO, datash->_environ[i], j);
		write(STDOUT_FILENO, "\n", 1);
	}
	datash->status = 0;

	return (1);
}
