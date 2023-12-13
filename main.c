#include "shell.h"

/**
 * main - simple shell entry point
 * @argc: count argument paramiter
 * @argv: vector argument paramiter
 * Return: 0 always (success).
 */
int main(int argc, char **argv)
{
	char *ln = NULL;
	/*char **cmd = NULL;*/
	/*int stat = 0;*/
	(void) argc;
	(void) argv;

	while (1)
	{
		ln = read_ln();
		if (ln == NULL)
			return (0);
		printf("%s\n", ln);
		free(ln);
		/*cmd = _spliter();
		stat = execute();*/
	}
}
