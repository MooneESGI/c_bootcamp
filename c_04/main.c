#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <assert.h>
#include "my_strncat.h"

int main(void)
{
    char buffer[100] = "Hello";
    char *result;

    result = my_strncat(buffer, " World", 3);
    assert(strcmp(buffer, "Hello Wo") == 0);
    assert(result == buffer);
    printf("✓ Test 1 : append 3 chars = \"Hello Wo\"\n");

    my_strncat(buffer, "rld!!!", 3);
    assert(strcmp(buffer, "Hello World") == 0);
    printf("✓ Test 2 : \"Hello World\"\n");

    my_strncat(buffer, "!", 1);
    assert(strcmp(buffer, "Hello World!") == 0);
    printf("✓ Test 3 : ajout de 1 caractère\n");

    my_strncat(buffer, "xyz", 0);
    assert(strcmp(buffer, "Hello World!") == 0);
    printf("✓ Test 4 : n=0 ne fait rien\n");

    char buf2[50] = "";
    my_strncat(buf2, "Test", 10);
    assert(strcmp(buf2, "Test") == 0);
    printf("✓ Test 5 : concaténation à vide\n");

    printf("\n✓ Tous les tests ont réussi !\n");
    return 0;
}
