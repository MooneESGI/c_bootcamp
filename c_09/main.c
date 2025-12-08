#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "my_strstr.h"

int main(void)
{
    const char *text = "Hello World, World is beautiful";
    char *ptr;

    ptr = my_strstr(text, "World");
    assert(ptr != NULL && strncmp(ptr, "World", 5) == 0);
    printf("✓ Test 1 : trouvé \"World\"\n");

    ptr = my_strstr(text, "is");
    assert(ptr != NULL && strcmp(ptr, "is beautiful") == 0);
    printf("✓ Test 2 : trouvé \"is\"\n");

    ptr = my_strstr(text, "xyz");
    assert(ptr == NULL);
    printf("✓ Test 3 : non trouvé\n");

    ptr = my_strstr(text, "");
    assert(ptr == text);
    printf("✓ Test 4 : aiguille vide\n");

    ptr = my_strstr("test", "test");
    assert(ptr != NULL && strcmp(ptr, "test") == 0);
    printf("✓ Test 5 : correspondance exacte\n");

    printf("\n✓ Tous les tests ont réussi !\n");
    return 0;
}
