#include <stdio.h>

int main() {
    int N;
    int a[105];
    int i;
    int isEvenArray = 1;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < N; i++) {
        if (a[i] % 2 != 0) {
            isEvenArray = 0;
            break;
        }
    }

    if (isEvenArray) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}

