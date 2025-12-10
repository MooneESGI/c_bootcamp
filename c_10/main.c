#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <assert.h>
#include "my_memset.h"

int main(void)
{
    char buffer[20];
    void *result;

    result = my_memset(buffer, 'A', 10);
    buffer[10] = '\0';
    assert(strcmp(buffer, "AAAAAAAAAA") == 0);
    assert(result == buffer);
    printf("✓ Test 1 : remplissage avec 'A'\n");

    my_memset(buffer, 0, sizeof(buffer));
    assert(buffer[0] == 0 && buffer[10] == 0);
    printf("✓ Test 2 : remplissage à zéro\n");

    char buffer2[10] = {0};
    my_memset(buffer2, 'x', 5);
    assert(buffer2[0] == 'x' && buffer2[4] == 'x');
    printf("✓ Test 3 : remplissage partiel\n");

    struct { int x; char y; } s2;
    my_memset(&s2, 0, sizeof(s2));
    assert(s2.x == 0 && s2.y == 0);
    printf("✓ Test 4 : remise à zéro d'une structure\n");

    char copy[5];
    my_memset(copy, 0xFF, 5);
    for (int i = 0; i < 5; i++)
        assert(copy[i] == (char)0xFF);
    printf("✓ Test 5 : remplissage avec octet 0xFF\n");

    printf("\n✓ Tous les tests ont réussi !\n");
    return 0;
}
