#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <assert.h>
#include "my_memcpy.h"

int main(void)
{
    char src[] = "Hello World";
    char dest[20];
    void *result;

    result = my_memcpy(dest, src, 6);
    dest[6] = '\0';
    assert(strcmp(dest, "Hello ") == 0);
    assert(result == dest);
    printf("✓ Test 1 : copie 6 bytes\n");

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[5];
    my_memcpy(arr2, arr1, sizeof(arr1));
    assert(arr2[0] == 1 && arr2[4] == 5);
    printf("✓ Test 2 : copie d'un tableau d'entiers\n");

    char buffer[10] = {0};
    my_memcpy(buffer, "ABC", 3);
    assert(buffer[0] == 'A' && buffer[2] == 'C' && buffer[3] == 0);
    printf("✓ Test 3 : copie partielle\n");

    struct { int x; char y; } s1 = {42, 'z'}, s2;
    my_memcpy(&s2, &s1, sizeof(s1));
    assert(s2.x == 42 && s2.y == 'z');
    printf("✓ Test 4 : copie d'une structure\n");

    char data[5] = {1, 2, 3, 4, 5};
    char copy[5];
    my_memcpy(copy, data, 5);
    assert(memcmp(copy, data, 5) == 0);
    printf("✓ Test 5 : données binaires\n");

    printf("\n✓ Tous les tests ont réussi !\n");
    return 0;
}
