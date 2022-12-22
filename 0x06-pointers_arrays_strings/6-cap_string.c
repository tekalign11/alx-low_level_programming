#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: capitalizes a string
 * Return: success
 */
char *cap_string(char *str)
{
	int yes = 0;

	while (str[yes])
	{
		while (!(str[yes] >= 'a' && str[yes] <= 'z'))
			yes++;
		if (str[yes - 1] == ' ' ||
				str[yes - 1] == '\t' ||
				str[yes - 1] == '\n' ||
				str[yes - 1] == ',' ||
				str[yes - 1] == ';' ||
				str[yes - 1] == '.' ||
				str[yes - 1] == '!' ||
				str[yes - 1] == '?' ||
				str[yes - 1] == '"' ||
				str[yes - 1] == '(' ||
				str[yes - 1] == ')' ||
				str[yes - 1] == '{' ||
				str[yes - 1] == '}')
			str[yes] -= 32;
	}
	return (str);
}
