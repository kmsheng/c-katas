// https://openhome.cc/Gossip/CGossip/OneDimArray.html
#include <stdio.h>
#define LENGTH 10

int main(void) {

    int scores[LENGTH] = {12, 34, 55, 22, 33, 44};
    int i;

    for (i = 0; i < LENGTH; i++) {
        printf("Student score: %d\n", scores[i]);
    }
    putchar('\n');

    return 0;
}
