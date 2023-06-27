#include "main.h"
/**
 * rev_string - A function that reverse a string
 * @s: string pointer
 * return: reverse in string
 */
void rev_string(char *s)
{
	char rvs = s[0];
	int a = 0;
	int i;

	while (s[a] != '\0')
		a++;
	for (i = 0; i < a; i++)
	{
		a--;
		rvs = s[i];
		s[i] = s[a];
		s[a] = rvs;
	}
}
