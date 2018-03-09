// https://openhome.cc/Gossip/CGossip/PrintfScanf.html
#include <stdio.h>

int main(void) {

    int num1, num2;

    printf("Please input two numbers, separate them with space: ");
    scanf("%d %d", &num1, &num2);
    printf("The numbers that you input: %d %d\n", num1, num2);

    printf("Please input two numbers again, but separate them with hyphen ( - )");
    scanf("%d-%d", &num1, &num2);
    printf("Here you go: %d-%d", num1, num2);

    return 0;
}
