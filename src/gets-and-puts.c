// https://openhome.cc/Gossip/CGossip/PutcharGetcharPutsGets.html
#include <stdio.h>

int main(void) {

    char str[1];

    puts("Please input string:");
    // https://stackoverflow.com/questions/1694036/why-is-the-gets-function-so-dangerous-that-it-should-not-be-used
    // probably will cause buffer overflow
    gets(str);

    puts("Input string is:");
    puts(str);

    return 0;
}
