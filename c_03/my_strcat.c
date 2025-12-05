#include "my_strchr.h"
#include <stddef.h>

char *my_strcat(char *dest, const char *src)
{
    int i = 0;
    int j = 0;

    if (!dest || !src)
        return dest; // Protection minimale

    // Avancer jusqu'à la fin de dest
    while (dest[i] != '\0')
        i++;

    // Copier src à la suite
    while (src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }

    // Terminer la nouvelle chaîne
    dest[i + j] = '\0';

    return dest;
}
