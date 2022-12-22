#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string variable
 * Return: Always success
 */
char *rot13(char *str)
{
	int yes1, yes2;

	char alphabet[52] = {'A', 'B', 'C', 'D', 'F',
					'G', 'H', 'I', 'J', 'K', 'L',
					'M', 'N', 'O', 'P', 'Q', 'R',
					'S', 'T', 'U', 'V', 'W', 'X',
					'Y', 'Z'};
	char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
								'T', 'U', 'V', 'W', 'X', 'Y',
								'Z', 'A', 'B', 'C', 'D', 'E',
								'F', 'G', 'H', 'I', 'J', 'K',
								'L', 'M', 'n', 'o', 'p', 'q',
								'r', 's', 't', 'u', 'v', 'w',
								'x', 'y', 'z', 'a', 'b', 'c',
								'd', 'e', 'f', 'g', 'h', 'i',
								'j', 'k', 'l', 'm'};
	while (str[++yes1])
		for (yes2 = 0; yes2 < 52; yes2++)
		{
			if (str[yes1] == alphabet[yes2])
			{
				str[yes1] = rot13key[yes2];
				break;
			}
		}
	return (str);
}
