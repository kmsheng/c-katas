#include <stdio.h>

int main(void) {

    int var = 10;
    int *ptr = &var;

    printf("var %p\n", &var);
    printf("ptr %p\n", ptr);

    return 0;
}
