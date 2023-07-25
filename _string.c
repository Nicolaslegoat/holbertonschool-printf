#include "main.h"
/**
* _string - function print string
* @str: pointer to an array
*
* Return: success
*/
int _string(char *str)
{
    int index = 0, cmp = 0;
    if (str)
    {
        while (str[index]!= '\0')
        {
            _myputchar(str[index]);
            cmp++;
            index++;
        }
    }
    return (cmp);
}
