#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: string to check
 * @accept: bytes to accept
 *
 * Return: number of bytes in initial segment of s from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, found;

	i = 0;
	while (s[i] != '\0')
	{
		found = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				found = 1;
			j++;
		}
		if (found == 0)
			return (i);
		i++;
	}
	return (i);
}
