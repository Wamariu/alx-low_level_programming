#include "main.h"
/**
 * wildcmp - compare two strings with "wildcard expansion" capabilities
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if string is identical otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' || *s2 == '\0')
	{
		if (*s1 == '\0' && *s2 == '*')
			return wildcmp(s1, ++s2);
		else if (*s1 == '*' && *s2 == '\0')
			return wildcmp(++s1, s2);
		return (0);
	}

	if (*s1 == *s2)
	{
		return wildcmp(++s1, ++s2);
	}
	else if (*s1 == '*')
	{
		if (*(s1 + 1) == '*')
			return wildcmp(++s1, s2);
		else
		{
			return wildcmp(s1, findsrc(s2, *(s1 + 1), 0, 0) + s2);
		}
	}
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return wildcmp(s1, ++s2);
		else
		{
			return wildcmp(s1 + findsrc(s1, *(s2 + 1), 0, 0) + s2);
		}
	}

	return (0);

}
/**
 * findsrc - finds source of string
 * @s: string
 * @c: character
 * @i: integer 
 * @p: paragraph
 * Return: source
 */
int findsrc(char *s, char c, int i, int p)
{
	if (*(s + i) == '\0')
		return (p + 1);
	else if (*(s + i) == c || *(s + i) == '*')
		p = i;

	return (findsrc(s, c, i + 1, p));
}
