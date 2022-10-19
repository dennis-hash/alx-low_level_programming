#include "main.h"

/**
 * print_last-digit - print last
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{

	int ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld);

	return (0);
}
