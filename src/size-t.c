// https://openhome.cc/Gossip/CGossip/StringLengthCopyCat.html
#include <stdio.h>
#include <string.h>

int main(void) {

    char input[80];

    puts("Please input string...");
    scanf("%s", input);

    size_t length = strlen(input);
    printf("String length; %lu\n", length);

    return 0;
}
