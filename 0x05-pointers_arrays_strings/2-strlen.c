#include "main.h"

/**
 * _strlen - return the length of
 * @s: the placse holder for
 *
 * Return: the value
 */
int  _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
