#include <stddef.h>

char *my_strcat(char *dest, const char *src)
{
    size_t i = 0;
    size_t j = 0;

    while (dest[i] != '\0')
        i++;

    while (src[j] != '\0') {
        dest[i + j] = src[j];
        j++;
    }

    dest[i + j] = '\0';
    return dest;
}
