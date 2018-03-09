// https://openhome.cc/Gossip/CGossip/PrintfScanf.html
#include <stdio.h>

int main(void) {

    char str[50];

    printf("Please input from 1 to 5:");
    scanf("%[1-5]", str);
    printf("Input character is %s\n", str);

    // flushes the output
    // NOTE: this does not work for OSX
    // https://cboard.cprogramming.com/c-programming/76326-newbie-question-fflush-stdin-fpurge-stdin-mac-pc.html
    // fflush(stdin);

    char str2[50];

    printf("Please input any char of XYZ:");
    scanf(" %[XYZ]", str2);
    printf("Input character is %s\n", str2);

    return 0;
}
