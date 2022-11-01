#include <stdlib.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @heystack: the longer string to search
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the located substring, or NULL if
 * the substring is not found.
 */
char *_strstr(char *heystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*heystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (heystack[i] != needle[i])
				break;

		}
		if (i != s)
			heystack++;
		else
			return (heystack);
	}
	return (0);
}
