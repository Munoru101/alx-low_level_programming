#include <stdio.h>
#include "main.h"

/**
 * main -entry
 * _isdigit function that checks for a digit 0 through 9
 * Returns: 1 if c is a digit
 * Returns: 0 otherwise
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9') ? 1 : 0;
}
