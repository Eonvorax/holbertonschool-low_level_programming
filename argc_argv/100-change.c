#include <stdio.h>
#include <stdlib.h>
/**
 * change - prints minimum number of coins to make change
 * @amount : amount of cents to give back
 * Return: 0
 */
int change(int amount)
{
	int rest, coins;

	rest = amount;
	coins = 0;
	while (rest > 0)
	{
		if (rest >= 25)
		{
			coins += rest / 25;
			rest = rest % 25;
		}
		else if (rest >= 10)
		{
			coins += rest / 10;
			rest = rest % 10;
		}
		else if (rest >= 5)
		{
			coins += rest / 5;
			rest = rest % 5;
		}
		else if (rest >= 2)
		{
			coins += rest / 2;
			rest = rest % 2;
		}
		else if (rest >= 1)
		{
			coins += rest / 1;
			rest = rest % 1;
		}
	}
	return (coins);
}
/**
 * main - calls change or handles errors
 * @argc : argument count
 * @argv : argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[argc - 1]) < 0)
	{
		printf("0\n");
	}
	printf("%d\n", change(atoi(argv[argc - 1])));
	return (0);
}
