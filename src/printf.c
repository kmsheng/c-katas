// https://openhome.cc/Gossip/CGossip/PrintfScanf.html
#include <stdio.h>

int main(void) {
    int count = printf("This is a test!\n");
    printf("%d\n", count);

    // limit decimal places
    printf("example: %.2f\n", 19.2345678);

    // 10 spaces with * usage
    printf("%*d\n", 10, 1);

    return 0;
}
