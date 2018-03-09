// https://openhome.cc/Gossip/CGossip/BreakContinueGoto.html
#include <stdio.h>

int main(void) {

    int input = 0;

begin:
    printf("Please input 1 to loop this input prompt\n");
    scanf("%d", &input);

    if (input == 1) {
        goto begin;
    }

    return 0;
}
