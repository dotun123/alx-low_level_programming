#include "main.h"
/**
 * _isupper - checks for uppercasee character
 * @c:The character to be checked
 * Return: Alway 0
*/

int _isupper(int c)
{
    if(c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
    return(0);
}

}