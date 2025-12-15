#include "my_strtok.h"
#include <stddef.h>

char *my_strtok(char *str, const char *delim)
{
    static char *saved = NULL;
    char *start;
    char *p;

    if (str != NULL)
        saved = str;

    if (saved == NULL)
        return NULL;

    while (*saved != '\0') {
        int is_delim = 0;
        for (p = (char *)delim; *p != '\0'; p++) {
            if (*saved == *p) {
                is_delim = 1;
                break;
            }
        }
        if (!is_delim)
            break;
        saved++;
    }

    if (*saved == '\0')
        return NULL;

    start = saved;

    while (*saved != '\0') {
        for (p = (char *)delim; *p != '\0'; p++) {
            if (*saved == *p) {
                *saved = '\0';
                saved++;
                return start;
            }
        }
        saved++;
    }

    return start;
}
