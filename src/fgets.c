// https://openhome.cc/Gossip/CGossip/PutcharGetcharPutsGets.html
#include <stdio.h>

int main(void) {

    char str[10];
    puts("Please input string:");
    fgets(str, sizeof(str), stdin);

    puts("Your input string is:");
    puts(str);

    return 0;
}
