#include "my_memchr.h"
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

void *my_memchr(const void *s, const void *c, size_t n)
{
    const unsigned char *ptr = s;
    unsigned char target = extract_char(c);

    for (size_t i = 0; i < n; i++) {
        if (ptr[i] == target)
            return (void *)(ptr + i);
    }

    return NULL;
}
