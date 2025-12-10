#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <assert.h>
#include "my_memmove.h"

int main(void)
{
    char buffer[20];
    void *result;

    strcpy(buffer, "Hello World");
    result = my_memmove(buffer, buffer + 6, 5);
    buffer[5] = '\0';
    assert(strcmp(buffer, "World") == 0);
    assert(result == buffer);
    printf("✓ Test 1 : décalage de chevauchement à gauche\n");

    strcpy(buffer, "ABCDEF");
    my_memmove(buffer + 2, buffer, 4);
    buffer[6] = '\0';
    assert(strcmp(buffer, "ABABCD") == 0);
    printf("✓ Test 2 : décalage à droite avec chevauchement\n");

    char src[] = "Test";
    char dest[10];
    my_memmove(dest, src, 5);
    assert(strcmp(dest, "Test") == 0);
    printf("✓ Test 3 : pas de chevauchement\n");

    strcpy(buffer, "Same");
    my_memmove(buffer, buffer, 4);
    assert(strncmp(buffer, "Same", 4) == 0);
    printf("✓ Test 4 : dest == src\n");

    strcpy(buffer, "ABCDEFGH");
    my_memmove(buffer + 1, buffer + 3, 4);
    assert(strncmp(buffer, "ADEFGF", 6) == 0);
    printf("✓ Test 5 : chevauchement au milieu\n");

    printf("\n✓ Tous les tests ont réussi !\n");
    return 0;
}
