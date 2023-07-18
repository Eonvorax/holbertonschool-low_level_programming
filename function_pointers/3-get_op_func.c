#include "3-calc.h"
/**
 * get_op_func - selects and runs the correct function for the operation
 * @s: pointer to string (operator)
 * Return: pointer to correct int (int, int) function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	
	i = 0;
	while (i < 5)
	{
		if (s[0] == *(ops[i].op))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (ops[i].f);
}
