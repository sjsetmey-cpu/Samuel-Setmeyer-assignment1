#include <stdio.h>

int main() {
    char morning, mom, sleeping;

    scanf(" %c", &morning);
    scanf(" %c", &mom);
    scanf(" %c", &sleeping);

    if (sleeping == 'y') {
        printf("Don't answer phone\n");
    }
    else if (morning == 'y' && mom == 'n') {
        printf("Don't answer phone\n");
    }
    else {
        printf("Answer phone\n");
    }

    return 0;
}
