#include "my_strchr.h"
#include <stddef.h>


char *my_strchr(const char *s, int c)
{
    int i = 0;
    unsigned char target = (unsigned char)c;

    if (!s)
        return NULL;

    // On doit inclure le '\0' dans la recherche
    while (1)
    {
        if ((unsigned char)s[i] == target)
            return (char *)&s[i];

        if (s[i] == '\0')
            break;

        i++;
    }

    return NULL;
}
