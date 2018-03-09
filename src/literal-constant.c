// https://openhome.cc/Gossip/CGossip/LiteralConstant.html
#include <stdio.h>

int main(void) {

    // int literal
    printf("sizeof(1):\t %lu\n", sizeof(1));

    // double literal
    printf("sizeof(1.0):\t %lu\n", sizeof(1.0));

    // http://icecube.wisc.edu/~dglo/c_class/printf.html
    printf("%d\n", 26);
    printf("%o%\n", 032);
    printf("%X\n", 0x1A);

    return 0;
}
