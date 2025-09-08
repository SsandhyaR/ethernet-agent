#include <stdio.h>

enum flag { FALSE = 0, TRUE = 2 };

int main() {
    enum flag check = TRUE;

    switch (check) {
        case FALSE:
            printf("Case FALSE\n");
            break;

        case TRUE:
            printf("Case TRUE\n");
            break;

        default:
            printf("Default case\n");
            break;
    }

    return 0;
}
