// https://www.tutorialspoint.com/c_standard_library/c_function_strcspn.htm
#include <stdio.h>
#include <string.h>

int main(void) {

    int len;
    const char str1[] = "ABCDEFG0";
    const char str2[] = "013";

    len = strcspn(str1, str2);

    printf("First matched character is at %d\n", len);

    return 0;
}
