#include <stdlib.h>
#include <stddef.h>

char *my_strdup(const char *s)
{
    size_t len = 0;

    while (s[len] != '\0')
        len++;

    char *dup = malloc(len + 1);
    if (!dup)
        return NULL;

    for (size_t i = 0; i <= len; i++)
        dup[i] = s[i];

    return dup;
}
