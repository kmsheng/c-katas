// https://openhome.cc/Gossip/CGossip/PrintfScanf.html
#include <stdio.h>

int main(void) {
    int count = printf("This is a test!\n");
    printf("%d\n", count);

    // limit decimal places
    printf("example: %.2f\n", 19.2345678);

    return 0;
}
