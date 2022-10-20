#include "main.h"

/**
 * print_alphabet - print_alphabet_x10
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int n, co;

	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;
		_putchar('\n');
	}
}
