#include "my_strchr.h"
#include <stddef.h>

char *my_strncat(char *dest, const char *src, size_t n)
{
    size_t i = 0;
    size_t j = 0;

    if (!dest || !src)
        return dest;

    while (dest[i] != '\0')
        i++;

    while (j < n && src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }

    dest[i + j] = '\0';

    return dest;
}
