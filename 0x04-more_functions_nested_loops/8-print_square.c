#include "main.h"

/**
  * print_square - prints line
  * @size: no. of times line to be printed
  * Return: Printed line
  */

void print_square(int size)
{
	int i;
	int k;

	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size; k++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
