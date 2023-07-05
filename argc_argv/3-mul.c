#include "main.h"
/**
 * mul - prints the result of the multiplication of two args
 * @argc : argument count
 * @argv : argument vector
 * Return: nothing
 */
void mul(int argc __attribute__((unused)), char *argv[])
{
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
}
/**
 * main - prints the product of args 1 and 2
 * @argc : argument count
 * @argv : argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if ((argc - 1) != 2)
	{
		printf("Error\n");
		return (1);
	}
	mul(argc, argv);
	return (0);
}
