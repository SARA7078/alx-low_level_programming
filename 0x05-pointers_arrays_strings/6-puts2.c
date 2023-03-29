#include "main.h"
/**
 * puts2 -  prints every other character of a string
 * starting with the first chracter
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int len = 0;
	int n = 0;
	char *a = str;
	int m;

	while (*a != '\0')
	{
		a++;
		len++;
	}
	n = len - 1;
	for (m = 0 ; m <= n ; m++)
	{
		if (m % 2 == 0)
	{
		_putchar(str[m]);
	}
	}
	_putchar('\n');
}

