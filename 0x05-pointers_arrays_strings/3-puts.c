#include "main.h"
/**
  * _puts - A function that prints a string
  * @str: pointer of a string
  * Return: 0
  */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
