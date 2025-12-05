#include "my_strchr.h"
#include <stddef.h>

int my_strcmp(const char *s1, const char *s2)
{
    int i = 0;

    if (!s1 || !s2)
        return 0; // sécurité minimale, évite segfault

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return (unsigned char)s1[i] - (unsigned char)s2[i];
        i++;
    }

    // Si on arrive ici, un des deux est '\0'
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}
