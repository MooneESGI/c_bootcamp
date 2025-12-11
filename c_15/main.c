#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "my_strdup.h"

int main(void)
{
    char *str1 = my_strdup("Hello");
    assert(str1 != NULL);
    assert(strcmp(str1, "Hello") == 0);
    printf("✓ Test 1: duplicate \"Hello\"\n");

    char *str2 = my_strdup("World");
    assert(str2 != NULL);
    assert(strcmp(str2, "World") == 0);
    printf("✓ Test 2: duplicate \"World\"\n");

    char *str3 = my_strdup("");
    assert(str3 != NULL);
    assert(strcmp(str3, "") == 0);
    printf("✓ Test 3: empty string duplicated\n");

    char *str4 = my_strdup("Longue chaîne avec espaces et chiffres 123");
    assert(str4 != NULL);
    assert(strcmp(str4, "Longue chaîne avec espaces et chiffres 123") == 0);
    printf("✓ Test 4: long string duplicated\n");

    const char *orig = "Test";
    char *copy = my_strdup(orig);
    copy[0] = 'x';
    assert(orig[0] == 'T');
    printf("✓ Test 5: independent copy\n");

    free(str1);
    free(str2);
    free(str3);
    free(str4);
    free(copy);

    printf("\n✓ Tous les tests ont réussi !\n");
    return 0;
}
