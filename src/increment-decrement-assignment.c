// https://openhome.cc/Gossip/CGossip/IncrementDecrementAssignment.html
#include <stdio.h>

int main(void) {

    int i = 0;
    printf("i = %d\n", i);

    i = i + 1;
    printf("i = i + 1: %d\n", i);

    i = i - 1;
    printf("i = i - 1: %d\n", i);

    printf("i++: %d\n", i++);

    printf("i--: %d\n", i--);

    return 0;
}
