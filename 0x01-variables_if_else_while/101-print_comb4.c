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
	int z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			for (z = 0; z < 10; z++)
			{
				if (x < y && y < z && x != y && y != z)
				{
					putchar('0' + x);
					putchar('0' + y);
					putchar('0' + z);
					if (x < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}

	}

	putchar('\n');
	return (0);
}
