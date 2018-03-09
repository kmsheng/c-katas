// https://openhome.cc/Gossip/CGossip/LogicalBitwise.html
#include <stdio.h>

int main(void) {

    int score = 75;
    printf("score = %d\n", score);
    printf("(score > 70) && (score < 80): %d\n", (score > 70) && (score < 80));

    return 0;
}
