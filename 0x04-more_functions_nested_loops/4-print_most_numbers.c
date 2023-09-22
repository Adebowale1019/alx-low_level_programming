#include "main.h"
/**
 * main - Entry point
 * author - adebowale
 * print_most_numbers - prints number
 * return - 0 (success)
 **/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
