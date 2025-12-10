#include <stddef.h>

char *my_strrchr(const char *s, int c)
{
    int i;
    unsigned char target = (unsigned char)c;

    if (!s)
        return NULL;
    i = 0;
    while (s[i] != '\0')
        i++;
    while (i >= 0)
    {
        if ((unsigned char)s[i] == target)
            return (char *)&s[i];
        i--;
    }

    return NULL;
}
