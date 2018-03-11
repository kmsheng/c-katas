// https://www.tutorialspoint.com/c_standard_library/c_function_strpbrk.htm
#include <stdio.h>
#include <string.h>

int main(void) {

    const char str1[] = "abcde2fghi3jk4l";
    const char str2[] = "34";

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    char *res = strpbrk(str1, str2);

    if (res) {
        printf("First matching character: %c\n", *res);
    }
    else {
        printf("Character not found");
    }

    return 0;
}
