#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
void print_alphabet_x10(void)
{
	int x;
	int y;

	for (y = 0; y <= 10; y++)
	{
		for (x = 'A'; x <= 'Z'; x++)
		{
			_putchar(tolower(x));
		}
		_putchar('\n');
	}

}
