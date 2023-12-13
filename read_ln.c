#include "shell.h"

char *read_ln(void)
{
	char *ln = NULL;
	size_t lng = 0;
	ssize_t l;

	write(STDOUT_FILENO, "$ ", 2);
	l = getline(&ln, &lng, stdin);
	if  (l == -1)
	{
		free(ln);
		return (NULL);
	}

	return (ln);
}
