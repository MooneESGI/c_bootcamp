#include "my_memset.h"
#include <stddef.h>

static unsigned char extract_char(const void *c)
{
    const char *p = c;

    if (p == NULL)
        return 0;

    if (p[0] == '\0')
        return 0;

    return (unsigned char)p[0];
}

void *my_memset(void *s, const void *c, size_t n)
{
    unsigned char *ptr = s;
    unsigned char value = extract_char(c);

    for (size_t i = 0; i < n; i++)
        ptr[i] = value;

    return s;
}
