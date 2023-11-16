#include "shell.h"
/**
 * _strlen - shows the length of string values
 * @s: the string whose length to check
 * Return: string will equall all the string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}
/**
 * _strcmp - collects all intro
 * @s1: the first strang
 * @s2: the second strang
 * Return: if s1 is bigger the s2 then successful
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}
/**
 * starts_with - looks at all past information
 * @haystack: string to search
 * @needle: the substring to find
 * Return: Null is the start
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}
/**
 * _strcat - cshowsonly 2 string values
 * @dest: the destination buffer
 * @src: the source buffer
 * Return: shows the distantiom
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
