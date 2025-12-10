#include "my_strrchr.h"
#include <stddef.h>

static char extract_char(const void *c)
{
    const char *p = c;

    if (p == NULL)
        return '\0';
    if (p[0] == '\0')
        return '\0';

    return p[0];
}

char *my_strrchr(const char *s, const void *c)
{
    char target = extract_char(c);
    const char *last = NULL;

    while (*s) {
        if (*s == target)
            last = s;
        s++;
    }
    if (target == '\0')
        return (char *)s;

    return (char *)last;
}
