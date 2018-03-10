// https://openhome.cc/Gossip/CGossip/StringLengthCopyCat.html
#include <stdio.h>
#include <string.h>

int main(void) {

    char str1[80] = "xyz";
    char str2[] = "abc";

    printf("Before: %s\n", str1);

    strcat(str1, str2);
    printf("After: %s\n", str1);

    return 0;
}
