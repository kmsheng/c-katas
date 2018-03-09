// https://openhome.cc/Gossip/CGossip/ifStatement.html
#include <stdio.h>

int main(void) {

    int input = 0;
    int remain = 0;

    printf("Please input integer:");
    scanf("%d", &input);

    remain = input % 2;

    if (remain == 1) {
        printf("%d is odd\n", input);
    }
    else {
        printf("%d is even\n", input);
    }

    return 0;
}
