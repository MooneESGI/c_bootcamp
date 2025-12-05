#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "my_strcpy.h"

int main(void)
{
    char buffer[100];
    char *result;

    result = my_strcpy(buffer, "Hello");
    assert(strcmp(buffer, "Hello") == 0);
    assert(result == buffer);
    printf("✓ Test 1 : \"Hello\" copié\n");

    my_strcpy(buffer, "World!");
    assert(strcmp(buffer, "World!") == 0);
    printf("✓ Test 2 : \"World!\" écrasé\n");

    my_strcpy(buffer, "");
    assert(strcmp(buffer, "") == 0);
    printf("✓ Test 3 : chaîne vide\n");

    my_strcpy(buffer, "The quick brown fox");
    assert(strcmp(buffer, "The quick brown fox") == 0);
    printf("✓ Test 4 : chaîne longue\n");

    my_strcpy(buffer, "Tab:\tNewline:\n");
    assert(strcmp(buffer, "Tab:\tNewline:\n") == 0);
    printf("✓ Test 5 : caractères spéciaux\n");

    printf("\n✓ Tous les tests ont réussi !\n");
    return 0;
}
