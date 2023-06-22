#include "main.h"
/**
 * fizz_buzz - prints numbers from 1 to 100 and FizzBuzz
 * Return: nothing
 */
void fizz_buzz(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (((n % 3) == 0) && ((n % 5) == 0))
		{
			printf("FizzBuzz");
		}
		else if ((n % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((n % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		if (n < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - check the code
 * Return: always 0
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
