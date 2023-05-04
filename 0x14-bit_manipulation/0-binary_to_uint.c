#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number a binary to unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int d_vl = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		d_vl = 2 * d_vl + (b[i] - '0');
	}

	return (d_vl);
}
