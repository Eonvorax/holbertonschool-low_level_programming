#include "main.h"
/**
 * print_args - prints all args in argv
 * @argc : argument count
 * @argv : argument vector
 * Return: nothing
 */
void print_args(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
/**
 * main - return the name of the program
 * @argc : argument count
 * @argv : argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	print_args(argc, argv);
	return (argc - 1);
}
