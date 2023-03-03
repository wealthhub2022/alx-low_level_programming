#include "main.h"

/**
 * _strcat - concatnating 2 strings
 * @dest: destination string
 * @src: the source sting
 * Return: the destination string
 */

char *_strcat(char *dest, char *src)
{
	int deslen = 0;
	int serlen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		deslen++;
	for (i = 0; src[i] != '\0'; i++)
		serlen++;
	for (i = 0; i <= serlen; i++)
		dest[deslen + i] = src[i];
	return (dest);
}
