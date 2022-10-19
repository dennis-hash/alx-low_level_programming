#include <stdio.h>

/**
 * main - entry
 * Return: ret 0 if success
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if ((c != 'q' && c != 'e') && c <= 'z')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
