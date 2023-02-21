#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
void print_alphabet(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		_putchar(tolower(x));
	}
	_putchar('\n');
}
