#include "main.h"
#include <stdlib.h>
/**
 * _integers - function to show number
 * @num: numbers
 * Return: success
 */
int _integers(int num)
{
	int n;

	n = num % 10;
	if (num == 0)
	{
		return (0);
	}

	_myputchar(n + '0');
	return _integers(num/10);
}
