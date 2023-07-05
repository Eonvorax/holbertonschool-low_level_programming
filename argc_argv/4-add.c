#include "main.h"
/**
 * add - prints the addition of all args in argv
 * @argc : argument count
 * @argv : argument vector
 * Return: nothing
 */
int add(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		char *t_arg;

		t_arg = argv[i];
		for (j = 0; (t_arg[j]) != '\0'; j++)
		{
			if ((t_arg[j]) < '0' || (t_arg[j]) > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
/**
 * main - return the name of the program
 * @argc : argument count
 * @argv : argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	return (add(argc, argv));
}
