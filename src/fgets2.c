// https://openhome.cc/Gossip/CGossip/PutcharGetcharPutsGets.html
#include <stdio.h>
#include <string.h>

int main(void) {

    char input[80];
    char copied[80];

    puts("Please input string...");
    fgets(input, sizeof(input) / sizeof(input[0]), stdin);

    strcpy(copied, input);
    printf("Copy the whole string: %s\n", copied);

    // reset all characters
    memset(copied, '\0', sizeof(copied));

    printf("What is the variable copied now? %s\n", copied);

    strncpy(copied, input, 4);
    printf("copy partial string: %s\n", copied);


    return 0;
}
