#include <stdio.h>

/**
 * main - this is the main betty documentation function
 *
 * Return: 0 if need be
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
