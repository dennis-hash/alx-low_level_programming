/*
 * File: 1-swap.c
 * Auth: dennis
 */

#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: The fist integer to be swapped.
 * @b: The scond integer to be swapped.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
