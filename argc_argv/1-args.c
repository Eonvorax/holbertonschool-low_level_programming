#include "main.h"
/**
 * print_argc - prints the number of arguments
 * @argc : argument count
 * Return: nothing
 */
void print_argc(int argc)
{
	printf("%d\n", (argc - 1));
}
/**
 * main - prints argc
 * @argc : argument count
 * @argv : argument vector
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	print_argc(argc);
	return (0);
}
