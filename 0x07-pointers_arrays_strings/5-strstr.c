/*
 * File : 5-strstr.c
 */
#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to search.
 * @needle: The substring to locate.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *begin = haystack;
		char *pattern = needle;

		/* Find the first character match */
		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}

		/* If the entire substring is found, return the starting address */
		if (!*pattern)
			return (begin);

		haystack = begin + 1; /* Move to the next character in haystack */
	}

	return (NULL); /* Substring not found */
}
