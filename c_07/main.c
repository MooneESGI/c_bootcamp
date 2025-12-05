#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "my_strchr.h"

int main(void)
{
    const char *str = "Hello World";
    char *ptr;

    ptr = my_strchr(str, 'o');
    assert(ptr != NULL && strcmp(ptr, "o World") == 0);
    printf("✓ Test 1 : 'o' trouvé\n");

    ptr = my_strchr(str, 'W');
    assert(ptr != NULL && strcmp(ptr, "World") == 0);
    printf("✓ Test 2 : 'W' trouvé\n");

    ptr = my_strchr(str, 'z');
    assert(ptr == NULL);
    printf("✓ Test 3 : 'z' introuvable\n");

    ptr = my_strchr(str, 'H');
    assert(ptr == str);
    printf("✓ Test 4 : premier caractère\n");

    ptr = my_strchr(str, '\0');
    assert(ptr != NULL && *ptr == '\0');
    printf("✓ Test 5 : \\0 trouvé\n");

    printf("\n✓ Tous les tests ont réussi !\n");
    return 0;
}
