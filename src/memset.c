// https://openhome.cc/Gossip/CGossip/PutcharGetcharPutsGets.html
#include <stdio.h>
#include <string.h>

int main(void) {

    char str[50];

    strcpy(str, "This is just a test");
    puts(str);

    // copies the character $ to 7 characters of the string pointed to
    memset(str, '$', 7);
    puts(str);

    return 0;
}
