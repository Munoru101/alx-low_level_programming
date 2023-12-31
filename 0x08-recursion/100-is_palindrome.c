#include "main.h"
int palindrome_check(char *s, int length, int index);
int is_palindrome(char *s);
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 * Return: the string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * palindrome_check - checks if a string is a palindrome
 * @s: the pointer to the string
 * @length: length of s
 * @index: a string index
 * Return: 1 if s is a palindrome
 * 0 otherwise
 */
int palindrome_check(char *s, int length, int index)
{
	if (s[index] == s[length / 2])
		return (1);
	if (s[index] == s[length - index - 1])
		return (palindrome_check(s, length, index + 1));
	return (0);
}
/**
 * is_palindrome - returns identity of a string if palindrome or not
 * @s: pointer to the string
 * Return: 1 if s is a palindrome
 * 0 otherwise
 */
int is_palindrome(char *s)
{
	int index = 0;
	int length = _strlen_recursion(s);

	if (!(*s))
		return (1);
	return (palindrome_check(s, length, index));
}
