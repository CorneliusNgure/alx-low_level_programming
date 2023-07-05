#include "main.h"
#include <stdio.h>

/*
 *_strcat - Concatenates strings s1 and s2.
 *
 *@dest: destination of the string to be concatenated.
 *@src: source of the string to be conacatenated.
 *
 *Return: pointer to the resulting dest.
*/
char *_strcat(char *dest, char *src)
{
	char s1[98];
	char s2[20];

	dest = s1;

	while (*dest != '\0')
	{
		dest++;
	}

	src = s2;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
