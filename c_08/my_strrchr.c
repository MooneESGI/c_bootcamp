#include <stddef.h>
#include "my_strrchr.h"

char *my_strrchr(const char *s, int c)
{
    int i;
    unsigned char target = (unsigned char)c;

    if (!s)
        return NULL;

    // Aller jusqu'à la fin
    i = 0;
    while (s[i] != '\0')
        i++;

    // Recherche depuis la fin (inclut '\0')
    while (i >= 0)
    {
        if ((unsigned char)s[i] == target)
            return (char *)&s[i];
        i--;
    }

    return NULL;
}
