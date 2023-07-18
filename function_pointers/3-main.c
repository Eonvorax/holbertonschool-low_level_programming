#include "3-calc.h"
/**
 * main - performs simple operations then print the result
 * @argc: int number of arguments, including file name
 * @argv: pointer to array of string arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	op_t calc;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	calc.op = argv[2];
	if (calc.op == NULL || get_op_func(calc.op) == NULL ||
	    strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	if ((calc.op[0] == '/' || calc.op[0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	calc.f = get_op_func(calc.op);
	printf("%d\n", (*(calc.f))(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
