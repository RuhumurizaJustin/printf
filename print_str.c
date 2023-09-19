#include "main.h"

/**
 * print_str - writes the string to stdout
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: 1 success
 */
int print_str(va_list arguments, char *buf, unsigned int ibuf)
{
	char *str;
	unsigned int k;
	char nill[] = "(null)";

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (k = 0; nill[k]; k++)
			ibuf = handl_buf(buf, nill[k], ibuf);
		return (6);
	}
	for (k = 0; str[k]; k++)
		ibuf = handl_buf(buf, str[k], ibuf);
	return (k);
}
