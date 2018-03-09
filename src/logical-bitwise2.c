// https://openhome.cc/Gossip/CGossip/LogicalBitwise.html
#include <stdio.h>

int main(void) {

    int num = 1;

    printf("2 ^ 0 = %d\n", num);

    num = num << 1;
    printf("2 ^ 1 = %d\n", num);

    num = num << 1;
    printf("2 ^ 2 = %d\n", num);

    num = num << 1;
    printf("2 ^ 3 = %d\n", num);

    return 0;
}
