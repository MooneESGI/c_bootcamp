#include <stdio.h>
#include <assert.h>
#include "my_strcmp.h"

int main(void)
{
    assert(my_strcmp("hello", "hello") == 0);
    printf("✓ Test 1 : \"hello\" == \"hello\"\n");

    assert(my_strcmp("abc", "abd") < 0);
    printf("✓ Test 2 : \"abc\" < \"abd\"\n");

    assert(my_strcmp("xyz", "abc") > 0);
    printf("✓ Test 3 : \"xyz\" > \"abc\"\n");

    assert(my_strcmp("test", "testing") < 0);
    printf("✓ Test 4 : \"test\" < \"testing\"\n");

    assert(my_strcmp("", "") == 0);
    printf("✓ Test 5 : chaînes vides égales\n");

    printf("\n✓ Tous les tests ont réussi !\n");
    return 0;
}
