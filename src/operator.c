// https://openhome.cc/Gossip/CGossip/ArithmeticType%20conversion.html
#include <stdio.h>

int main(void) {

    // add
    printf("1 + 1 = %d\n", 1 + 1);

    // minus
    printf("1 - 1 = %d\n", 1 - 1);

    // multiply
    printf("2 * 2 = %d\n", 2 * 2);

    // divide
    printf("2 / 2 = %d\n", 2 / 2);

    // get the remainder of dividing random number and 100
    printf("%d\n", rand() % 100);

    int number = 10;

    printf("%f\n", (double) number / 3);

    return 0;
}
