#include <stdio.h>

int main(void) {

    char str[108];
    int strIndex = 0;
    int height = 8;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j <= (height + i); j++) {

            int isEyePosition = (i == 1) && (j == 8);

            if (isEyePosition) {
                str[strIndex++] = '@';
            }
            else if (j < (height - i)) {
                str[strIndex++] = ' ';
            }
            else {
                str[strIndex++] = (i <= 2) ? 'o' : '-';
            }
        }
        str[strIndex++] = '\n';
    }

    puts("The all seeing eye\n");
    puts(str);

    return 0;
}
