#include "my_strcpy.h"

char *my_strcpy(char *dest, const char *src)
{
    int i = 0;

    if (!dest || !src)
        return dest;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return dest;
}
