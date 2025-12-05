#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "my_strcat.h"

int main(void)
{
    char buffer[100] = "Hello";
    char *result;

    result = my_strcat(buffer, " ");
    assert(strcmp(buffer, "Hello ") == 0);
    assert(result == buffer);
    printf("✓ Test 1 : \"Hello \"\n");

    my_strcat(buffer, "World");
    assert(strcmp(buffer, "Hello World") == 0);
    printf("✓ Test 2 : \"Hello World\"\n");

    my_strcat(buffer, "");
    assert(strcmp(buffer, "Hello World") == 0);
    printf("✓ Test 3 : my_strcat(buffer, \"\")\n");

    printf("✓ Test 4 : concaténation de chaînes vides\n");
    char buf2[50] = "";
    my_strcat(buf2, "Test");
    assert(strcmp(buf2, "Test") == 0);

    printf("✓ Test 5 : concaténation à une chaîne vide\n");
    printf("\n✓ Tous les tests ont réussi !\n");

    return 0;
}
