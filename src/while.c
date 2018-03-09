#include <stdio.h>

int main(void) {

    int masteredThisDomainKnowledge = 0;
    int hours = 0;

    while (! masteredThisDomainKnowledge) {
        // keep working hard
        if (10000 == (hours++)) {
            masteredThisDomainKnowledge = 1;
        }
    }

    puts("Use pain to fuel your success.");

    return 0;
}
