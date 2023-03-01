#include "main.h"

/**
 * _puts - function for the loop
 *
 * @str: plaholder
 *
 * Return: always 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
