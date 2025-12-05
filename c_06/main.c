#include <stdio.h>
#include <stddef.h>
#include <assert.h>
#include "my_strncmp.h"

int main(void)
{
    assert(my_strncmp("hello", "help", 3) == 0);
    printf("✓ Test 1 : \"hel\" == \"hel\"\n");

    assert(my_strncmp("hello", "help", 4) < 0);
    printf("✓ Test 2 : \"hell\" < \"help\"\n");

    assert(my_strncmp("test", "testing", 4) == 0);
    printf("✓ Test 3 : \"test\" == \"test\"\n");

    assert(my_strncmp("abc", "xyz", 0) == 0);
    printf("✓ Test 4 : n=0 toujours égal\n");

    assert(my_strncmp("ABC", "ABZ", 2) == 0);
    printf("✓ Test 5 : les 2 premiers caractères sont égaux\n");

    printf("\n✓ Tous les tests ont réussi !\n");
    return 0;
}
