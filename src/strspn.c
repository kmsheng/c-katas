// https://openhome.cc/Gossip/CGossip/StringCmpSearch.html
#include <stdio.h>
#include <string.h>
#define LENGTH 80

int main(void) {

    char str1[LENGTH];
    char str2[LENGTH];

    printf("Input value for variable str1:");
    fgets(str1, LENGTH, stdin);

    printf("Input value for variable str2:");
    fgets(str2, LENGTH, stdin);

    str2[strlen(str2) - 1] = '\0';

    size_t pos = strspn(str1, str2);

    printf("result of strspn(str1, str2): %lu\n", pos);

    return 0;
}
