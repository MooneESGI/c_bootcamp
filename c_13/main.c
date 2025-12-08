#include <stdio.h>
#include <stddef.h>
#include <assert.h>
#include "my_memcmp.h"

int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Help";

    assert(my_memcmp(str1, str2, 5) == 0);
    printf("✓ Test 1 : chaînes identiques\n");

    assert(my_memcmp(str1, str3, 3) == 0);
    printf("✓ Test 2 : les 3 premiers octets sont égaux\n");

    assert(my_memcmp(str1, str3, 4) < 0);
    printf("✓ Test 3 : \"Hell\" < \"Help\"\n");

    int arr1[] = {1, 2, 3};
    int arr2[] = {1, 2, 4};
    assert(my_memcmp(arr1, arr2, sizeof(arr1)) < 0);
    printf("✓ Test 4 : les tableaux d'entiers diffèrent\n");

    char data[] = "ABC\0DEF";
    assert(my_memcmp(data, "ABC\0DEF", 7) == 0);
    printf("✓ Test 5 : comparaisons jusqu'à \\0\n");

    printf("\n✓ Tous les tests ont réussi !\n");
    return 0;
}
