#include "main.h"
#include <unistd.h>

/**
 
 *_putchar - Writes the character c to stdout
 *@c: character to print
 *
 *Return: 1 on success 
 *Return -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1))
}
