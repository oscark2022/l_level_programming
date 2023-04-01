#include "main.h"

/**
 * print_alphabet_x10 - print alphabets in lowercase
 *
 * Return: Always 0 (Success).
 */
void print_alphabet_x10(void)
{
	int alpha, num;

	num = 0;

	while (num < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		num++;
		_putchar('\n');
	}
}
