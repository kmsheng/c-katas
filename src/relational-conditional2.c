// https://openhome.cc/Gossip/CGossip/RelationalConditional.html
#include <stdio.h>

int main(void) {

    int score = 0;

    printf("Please input student score:");
    scanf("%d", &score);

    printf("Does this student pass? %c\n", score >= 60 ? 'Y': 'N');

    return 0;
}
