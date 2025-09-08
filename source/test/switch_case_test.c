#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 10                    
    printf("Value: %d\n", x);
    int y = 3;

    char *p = malloc(10);
    if (p == NULL)
        return 1;
    for (int i = 0; i < 10; i++)
        p[i] = 'A';

    free(p);
    p[0] = 'B';

    free(p);

    int *ptr = NULL;
    *ptr = 5;

    return 0;
}
