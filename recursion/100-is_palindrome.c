#include "main.h"
/**
 * find_end - recursively find the end of the string
 * @s : pointer to string
 * Return: pointer to end of string s
 */
char *find_end(char *s)
{
	if (*s == '\0')
	{
		return (s);
	}
	return (find_end(s + 1));
}
/**
 * rev_pal - recursively checks string for palindrome
 * @s : pointer to string
 * @end_s : pointer to end of string
 * Return: int, 1 for palindrome, 0 otherwise
 */
int rev_pal(char *s, char *end_s)
{
	if (*s != *end_s)
	{
		return (0);
	}
	if (s > end_s)
	{
		return (1);
	}
	return (rev_pal(s + 1, end_s - 1));
}
/**
 * is_palindrome - returns 1 if string is palindrome, 0 if not
 * @s : pointer to input string
 * Return: int, 0 or 1
 */
int is_palindrome(char *s)
{
	char *s_end;

	if (*s == '\0')
	{
		return (0);
	}
	s_end = find_end(s);
	return (rev_pal(s, s_end - 1));
}
