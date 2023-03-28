#include "main.h"
/**
 * puts2 - print one character fllowed by new line
 * @str: input
 * return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\n')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0 ; 0 <= t ; 0++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
}
