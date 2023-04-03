#include "main.h"
/**
 * _memset - fills a block with of memory with constent byte
 * @s: starting adress of memory to be filled
 * @b: deisred value
 * @n: value bytes to be changed
 *
 * Returun: changed value of bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
