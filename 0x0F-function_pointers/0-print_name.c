#include"stdlib.h"
#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: pointer to char
 * @f: pointer to function
 * Return: (0)
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
	f(name);
}
