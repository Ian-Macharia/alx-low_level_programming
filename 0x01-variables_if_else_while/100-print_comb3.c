#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (x != y && x < y)
			{
				putchar('0' + x);
				putchar('0' + y);
				putchar(',');
				putchar(' ');
			}
		}

	}

	putchar('\n');
	return (0);
}
