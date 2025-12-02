#include <stdio.h>

int main() {
    int n, printed = 0;
    scanf("%d", &n);

    if (n % 3 == 0) {
        printf("Pling");
        printed = 1;
    }
    if (n % 5 == 0) {
        printf("Plang");
        printed = 1;
    }
    if (n % 7 == 0) {
        printf("Plong");
        printed = 1;
    }
    if (!printed) {
        printf("%d", n);
    }
    printf("");
    return 0;
}

