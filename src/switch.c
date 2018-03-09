// https://openhome.cc/Gossip/CGossip/switchStatement.html
#include <stdio.h>

int main(void) {

    int score = 0;
    int level = 0;

    printf("Please input score:");
    scanf("%d", &score);
    level = score / 10;

    switch(level) {
        case 10:
        case 9:
            puts("You're the best");
            break;
        case 8:
            puts("You're doing good");
            break;
        case 7:
            puts("Need some improvements");
            break;
        case 6:
            puts("Not doing good");
            break;
        default:
            puts("Have you ever studied ?");
    }


    return 0;
}
