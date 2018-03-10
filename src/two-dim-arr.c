// https://openhome.cc/Gossip/CGossip/TwoDimArray.html
#include <stdio.h>
#define ROW 9
#define COLUMN 9

int main(void) {

    int maze[ROW][COLUMN];

    for (int i = 1; i <= ROW; i++) {
        for (int j = 1; j <= COLUMN; j++) {
            maze[i][j] = i * j;
        }
    }

    for (int j = 1; j <= COLUMN; j++) {
        for (int i = 1; i <= ROW; i++) {
            printf("%d * %d = %d\t", i, j, maze[i][j]);
        }
        putchar('\n');
    }

    return 0;
}
