#include "_putchar.h"
/**
 * main - Entry point
 *
 * Return: Always 0 suscess 
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0)
}
