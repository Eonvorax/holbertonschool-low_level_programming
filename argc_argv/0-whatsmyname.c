#include "main.h"
/**
 * slim_shady - return the name of the program
 * @argv : argument vector
 * Return: nothing
 */
void slim_shady(char *argv[])
{
	printf("%s\n", *argv);
}
/**
 * main - return the name of the program
 * @argc : argument count
 * @argv : argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	slim_shady(argv);
	return (argc - 1);
}
