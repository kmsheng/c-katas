#include <stdio.h>
#include <stdlib.h>

int main(void) {

    printf("datatypes in size (bytes)\n");
    printf("short: %lu\n", sizeof(short));
    printf("int: %lu\n", sizeof(int));
    printf("long: %lu\n", sizeof(long));
    printf("float: %lu\n", sizeof(float));
    printf("double: %lu\n", sizeof(double));
    printf("long double: %lu\n", sizeof(long double));
    printf("char: %lu\n", sizeof(char));

    return 0;
}
