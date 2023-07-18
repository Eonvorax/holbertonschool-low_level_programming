#include "function_pointers.h"
/**
 * print_name - uses a function pointer to print a name
 * @name: pointer to string name to print
 * @f: pointer to function void (char *) that prints a name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
