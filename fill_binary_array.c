#include "main.h"

/**
 * fill_binary_array - prints decimal in binary
 * @binary: pointer to binary
 * @int_in: input number
 * @isneg: if input number is negative
 * @limit: size of the binary
 * Return: number of chars printed.
 */
char *fill_binary_array(char *binary, long int int_in, int isneg, int limit)
{
	int k;

	for (k = 0; k < limit; k++)
		binary[k] = '0';
	binary[limit] = '\0';
	for (k = limit - 1; int_in > 1; k--)
	{
		if (int_in == 2)
			binary[k] = '0';
		else
			binary[k] = (int_in % 2) + '0';
		int_in /= 2;
	}
	if (int_in != 0)
		binary[k] = '1';
	if (isneg)
	{
		for (k = 0; binary[k]; k++)
			if (binary[k] == '0')
				binary[k] = '1';
			else
				binary[k] = '0';
	}
	return (binary);
}
