#include "main.h"
#include <unistd.h>
/**
 *_myputchar - write the caracters c to stdout
 *@c: the caracter to print
 *Return: sucess
 */
int _myputchar(char c)
{
	return (write(1, &c, 1));
}
