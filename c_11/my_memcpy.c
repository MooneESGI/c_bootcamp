#include "my_memcpy.h"

void *my_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *d = dest;
    const unsigned char *s = src;

    if (!dest || !src)
        return dest;

    for (i = 0; i < n; i++)
        d[i] = s[i];

    return dest;
}
