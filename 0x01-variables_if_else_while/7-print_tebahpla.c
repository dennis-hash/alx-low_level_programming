#include <stdio.h>

/**
 * main - entry
 * Return: always 0 if true
 */
int main(void)
{
	char c;

	c = 's';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
