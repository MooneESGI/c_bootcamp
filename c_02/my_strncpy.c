#include "my_strchr.h"
#include <stddef.h>

char *my_strncpy(char *dest, const char *src, size_t n)
{
    size_t i = 0;

    if (!dest || !src)
        return dest; // sécurité minimale

    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    // Remplir le reste avec '\0' si src < n
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return dest;
}
