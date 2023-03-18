#include <stdio.h>

/**
 * main - this is the main betty documentation function
 *
 * Return: 0 if need be
 */

int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
