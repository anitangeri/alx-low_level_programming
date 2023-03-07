#include "main.h"

/**
  * is_palindrome - Returns if a string is palindrome
  * @s: the string value to be check
  * Return: integer value
  */
int check_palindrome(char *s);

int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);

	return (check_palindrome(s));
}

/**
  * check_palindrome - Check if a string is palindrome
  * @s: the string value to be check
  * Return: integer value
  */
int check_palindrome(char *s)
{
	int l = _strlen_recursion(s) - 1;

	if (*s == s[l])
	{
		s++;
		l--;
	}
	else
	{
		return (0);
	}

	return (1);
}
