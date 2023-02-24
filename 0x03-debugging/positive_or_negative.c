#include "main.h"

/**
 * positive_or_negative - checks for negative or positive numbers
 *
 * @i: the numbers to be checked
 *
 * Return: 0 always
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negetive", i);
	else
		printf("%d is postive", i);
}
