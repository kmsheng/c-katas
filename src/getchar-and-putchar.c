// https://openhome.cc/Gossip/CGossip/PutcharGetcharPutsGets.html
#include <stdio.h>

int main(void) {

    char c;

    printf("Please input a charater:");
    c = getchar();

    putchar(c);
    putchar('\n');

    return 0;
}
