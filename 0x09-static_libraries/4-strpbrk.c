#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* _strpbrk - a function
*@s: a pointer
*@accept: char pointer
*Return: 0
*/

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}

