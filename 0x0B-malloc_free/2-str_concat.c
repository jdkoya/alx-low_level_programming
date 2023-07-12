#include "main.h"
#include <stdlib.h>

/**
 * str_concat - The returned pointer should point to a newly allocated space
 * in memory which contains the contents of s1, followed by the contents
 * of s2, and null terminated
 * @s1: first string
 * @s2: second string
 * Return: returns concatenated pointer, NULL if fail
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = a = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[a] != '\0')
		a++;
	conct = malloc(sizeof(char) * (i + a + 1));
	if (conct == NULL)
		return (NULL);
	i = a = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}
	while (s2[a] != '\0')
	{
		conct[i] = s2[a];
		i++, a++;
	}
	conct[i] = '\0';
	return (conct);
}
