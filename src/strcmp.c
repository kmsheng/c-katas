// https://openhome.cc/Gossip/CGossip/StringCmpSearch.html
#include <stdio.h>
#include <string.h>

int main(void) {

    char passwd[] = "123456";
    char input[7];

    printf("Please input password:");
    fgets(input, sizeof(input), stdin);

    if (strcmp(passwd, input) == 0) {
        puts("Password is correct");
    }
    else {
        puts("Password is wrong");
    }

    return 0;
}
