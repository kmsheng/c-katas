// https://openhome.cc/Gossip/CGossip/StringCmpSearch.html
#include <stdio.h>
#include <string.h>
#define LENGTH 80

int main(void) {

    char source[LENGTH];
    char search[LENGTH];

    printf("Please input string:");
    fgets(source, LENGTH, stdin);

    printf("Search string:");
    fgets(search, LENGTH, stdin);

    // trim the last newline character
    search[strlen(search) - 1] = '\0';

    char *substr = strstr(source, search);

    if (substr == NULL) {
        printf("Didn't find substring that matches\n");
    }
    else {
        printf("substr: %s", substr);
    }

    return 0;
}
