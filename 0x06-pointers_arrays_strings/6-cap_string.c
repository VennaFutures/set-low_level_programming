#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 *
 * Return: pointer to str
 */
char *cap_string(char *str)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else
		{
			j = 0;
			while (sep[j] != '\0')
			{
				if (sep[j] == str[i - 1] && str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 32;
				j++;
			}
		}
		i++;
	}
	return (str);
}
