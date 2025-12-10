#include <stddef.h>
#include "my_strstr.h"

char *my_strstr(const char *haystack, const char *needle)
{
    size_t i = 0, j = 0;

    if (!haystack || !needle)
        return NULL;
    if (needle[0] == '\0')
        return (char *)haystack;
    while (haystack[i] != '\0')
    {
        if (haystack[i] == needle[0])
        {
            j = 0;
            while (needle[j] != '\0' && haystack[i + j] == needle[j])
            {
                j++;
            }

            if (needle[j] == '\0')
                return (char *)&haystack[i];
        }

        i++;
    }

    return NULL;
}
