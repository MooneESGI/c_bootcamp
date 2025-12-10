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

char *my_strchr(const char *s, const void *c)
{
    char target = extract_char(c);

    while (*s) {
        if (*s == target)
            return (char *)s;
        s++;
    }
    if (target == '\0')
        return (char *)s;

    return NULL;
}
