#include "main.h"

/**
 * is_printable - will evaluate if a char is printable
 * @c: The char to evaluate
 *
 * Return: 1 if c is printable otherwise, 0.
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - will append ascii in hexadecimal code to buffer
 * @buffer: The array of characters
 * @i: The index to start appending
 * @ascii_code: The ASCII Code
 *
 * Return: Always 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/*Format will be 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - will verify if a char is a digit
 * @c: The char to evaluate
 *
 * Return: 1 if c is a digit, otherwise 0
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - will cast a number to the specified size
 * @num: The num to be cast
 * @size: The number indicating type to be cast
 *
 * Return: Cast value of sum
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - will cast a num to the specified size
 * @num: The num to cast
 * @size: The Number indicating cast type
 *
 * Return: Value of cast number
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
