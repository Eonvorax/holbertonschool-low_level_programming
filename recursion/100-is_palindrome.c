#include "main.h"
/**
 * find_end - recursively find the end of the string
 * @s : pointer to string
 * Return: pointer to end of string s
 */
char *find_end(char *s)
{
	if (*s != '\0')
	{
		find_end(s + 1);
	}
	return (s);
}		
/**
 * rev_pal - recursively checks string for palindrome
 * @s : pointer to string
 * @len : int length of string
 * Return: int
 */
int rev_pal(char *s, char *end_s)
{
	if (s <= end_s && *s == *end_s)
	{
		rev_pal(s + 1, end_s - 1);
	}
	else
	{
		return (0);
	}
	return (1);
}
/**
 * is_palindrome - returns 1 if string is palindrome, 0 if not
 * @s : pointer to input string
 * Return: int, 0 or 1
 */
int is_palindrome(char *s)
{
	if (*s != '\0') 
	{
		return (0);
	}
	return rev_pal(*s, find_end(*s));
}
