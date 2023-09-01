#include "main.h"

/**
 * flip_bits - counts bits to change
 * @n: first no
 * @m: second no
 *
 * Return: no of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		current = exclusive >> k;
		if (current & 1)
			count++;
	}

	return (count);
}
