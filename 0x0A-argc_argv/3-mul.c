#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */

int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int res = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}


/**
 * main - multiply two numbers
 * @argc:count of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 **/

int main(int argc, char *argv[])
{
	int n, m, multip;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
/* _atoi convert a string to an int */
	n = _atoi(argv[1]);
	m = _atoi(argv[2]);
	multip = n * m;
	printf("%d\n", multip);
	return (0);
}
