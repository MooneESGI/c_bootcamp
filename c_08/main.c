#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "my_strrchr.h"

int main(void)
{
    const char *str = "Hello World";
    char *ptr;

    ptr = my_strrchr(str, 'o');
    assert(ptr != NULL && strcmp(ptr, "orld") == 0);
    printf("✓ Test 1 : dernier 'o' trouvé\n");

    ptr = my_strrchr(str, 'H');
    assert(ptr == str);
    printf("✓ Test 2 : premier caractère (un seul)\n");

    ptr = my_strrchr(str, 'z');
    assert(ptr == NULL);
    printf("✓ Test 3 : non trouvé\n");

    ptr = my_strrchr(str, 'l');
    assert(ptr != NULL && strcmp(ptr, "ld") == 0);
    printf("✓ Test 4 : dernier 'l' trouvé\n");

    ptr = my_strrchr("aaa", 'a');
    assert(ptr != NULL && strcmp(ptr, "a") == 0);
    printf("✓ Test 5 : dernier d’une série de plusieurs\n");

    printf("\n✓ Tous les tests ont réussi !\n");
    return 0;
}
