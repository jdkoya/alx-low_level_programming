#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* _strncpy - a function
* @dest: a pointer
* @src: pointer
* @n: integer
* Return: 0
*/

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}

