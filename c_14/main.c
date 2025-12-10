#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <assert.h>
#include "my_memchr.h"

int main(void)
{
    char buffer[] = "Hello\0World";
    char *ptr;

    // Test 1 : trouver 'W' après le \0
    ptr = my_memchr(buffer, 'W', 11);
    assert(ptr != NULL && strcmp(ptr, "World") == 0);
    printf("✓ Test 1 : 'W' trouvé après \\0\n");

    // Test 2 : trouver l'octet nul
    ptr = my_memchr(buffer, '\0', 11);
    assert(ptr == buffer + 5);
    printf("✓ Test 2 : octet nul trouvé\n");

    // Test 3 : premier caractère
    ptr = my_memchr(buffer, 'H', 11);
    assert(ptr == buffer);
    printf("✓ Test 3 : premier octet\n");

    // Test 4 : caractère absent
    ptr = my_memchr(buffer, 'z', 11);
    assert(ptr == NULL);
    printf("✓ Test 4 : non trouvé\n");

    // Test 5 : données binaires
    char data[] = {1, 2, 3, 4, 5};
    ptr = my_memchr(data, 3, 5);
    assert(ptr == data + 2);
    printf("✓ Test 5 : données binaires\n");

    printf("\n✓ Tous les tests ont réussi !\n");
    return 0;
}
