#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "my_strtok.h"

int main(void)
{
    char text1[] = "Hello,World;Test:Example";
    char *token;

    token = my_strtok(text1, ",;:");
    assert(token != NULL && strcmp(token, "Hello") == 0);
    token = my_strtok(NULL, ",;:");
    assert(token != NULL && strcmp(token, "World") == 0);
    token = my_strtok(NULL, ",;:");
    assert(token != NULL && strcmp(token, "Test") == 0);
    token = my_strtok(NULL, ",;:");
    assert(token != NULL && strcmp(token, "Example") == 0);
    token = my_strtok(NULL, ",;:");
    assert(token == NULL);
    printf("✓ Test 1 : plusieurs délimiteurs\n");

    char text2[] = "A;;B;C";
    token = my_strtok(text2, ";,");
    assert(strcmp(token, "A") == 0);
    token = my_strtok(NULL, ";,");
    assert(strcmp(token, "B") == 0);
    token = my_strtok(NULL, ";,");
    assert(strcmp(token, "C") == 0);
    token = my_strtok(NULL, ";,");
    assert(token == NULL);
    printf("✓ Test 2 : délimiteurs consécutifs\n");

    char text3[] = "one two three";
    token = my_strtok(text3, " ");
    assert(strcmp(token, "one") == 0);
    token = my_strtok(NULL, " ");
    assert(strcmp(token, "two") == 0);
    token = my_strtok(NULL, " ");
    assert(strcmp(token, "three") == 0);
    printf("✓ Test 3 : délimiteur unique\n");

    char text4[] = "NoDelimiters";
    token = my_strtok(text4, ";");
    assert(strcmp(token, "NoDelimiters") == 0);
    token = my_strtok(NULL, ";");
    assert(token == NULL);
    printf("✓ Test 4 : aucun délimiteur\n");

    char text5[] = ";A;;";
    token = my_strtok(text5, ";");
    assert(strcmp(token, "A") == 0);
    token = my_strtok(NULL, ";");
    assert(token == NULL);
    printf("✓ Test 5 : jetons vides ignorés\n");

    printf("\n✓ Tous les tests ont réussi !\n");
    return 0;
}
