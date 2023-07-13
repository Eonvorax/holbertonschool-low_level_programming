#include "main.h"
/**
 * argstostr - concatenates all arguments with newline separations
 * @ac : int number of arguments
 * @av : array of argument strings
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *str, *arg;
	int av_i, str_i, arg_i, str_size;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	str_size = 0;
	for (av_i = 0; av_i < ac; av_i++)
	{
		arg = av[av_i];
		for (arg_i = 0; arg[arg_i] != '\0'; arg_i++)
		{
			str_size++;
		}
		str_size++;
	}
	str = malloc(sizeof(char) * (str_size + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	str_i = 0;
	for (av_i = 0; av_i < ac; av_i++)
	{
		arg = av[av_i];
		for (arg_i = 0; arg[arg_i] != '\0'; arg_i++)
		{
			str[str_i] = arg[arg_i];
			str_i++;
		}
		str[str_i] = '\n';
		str_i++;
	}
	return (str);
}
