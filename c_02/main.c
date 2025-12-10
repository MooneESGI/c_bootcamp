#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <assert.h>
#include "my_strncpy.h"

int main(void)
{
    char buffer[20];

    my_strncpy(buffer, "Hello", 3);
    buffer[3] = '\0';
    assert(strcmp(buffer, "Hel") == 0);
    printf("✓ Test 1 : copy 3 chars = \"Hel\"\n");

    memset(buffer, 'x', sizeof(buffer));
    my_strncpy(buffer, "Hi", 10);
    assert(buffer[0] == 'H' && buffer[1] == 'i' && buffer[2] == '\0');
    printf("✓ Test 2 : chaîne source courte complétée par \\0\n");

    my_strncpy(buffer, "Testing", 4);
    buffer[4] = '\0';
    assert(strcmp(buffer, "Test") == 0);
    printf("✓ Test 3 : troncature à n\n");

    my_strncpy(buffer, "ABC", 3);
    assert(buffer[0] == 'A' && buffer[1] == 'B' && buffer[2] == 'C');
    printf("✓ Test 4 : longueur exacte (sans \\0 auto)\n");

    my_strncpy(buffer, "", 5);
    assert(buffer[0] == '\0');
    printf("✓ Test 5 : chaîne vide\n");

    printf("\n✓ Tous les tests ont réussi !\n");
    return 0;
}
