#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer to be swaped
 * @b: integer to swaped
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

