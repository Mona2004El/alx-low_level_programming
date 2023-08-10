#include "main.h"
#include <stdio.h>
/**
 * *string_nconcat - concatenates two strings.
 *@s1: first string
 *@s2: second string
 *@n: n bytes of s2
 *
 *Return: always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_l, s2_l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_l = 0; s1[s1_l] != '\0'; s1_l++)
		;
	for (s2_l = 0; s2[s2_l] != '\0'; s2_l++)
		;
	str = malloc(s1_l + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0, s1[i] != '\0', i++)
		str[i] = s1[i];
	for (j = 0, j < n, j++)
	{
		str[i] = s2[j];
	i++;
	}
	str[i] = '\0';
	return (str);

}
