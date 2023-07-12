#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* _strspn - a function
*@s: pointer
*@accept: pointer
*Return: 0
*/

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

