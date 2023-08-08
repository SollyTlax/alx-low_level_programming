#include "main.h"
/**
 * _strchr - write a function that locates a character in a string
 * @s: input string
 * @c: first occurence of character
 *
 * Return: result
 */
char *_strchr(char *s, char c)
{

	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
	       s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
