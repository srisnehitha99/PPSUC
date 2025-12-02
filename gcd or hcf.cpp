#include <stdio.h>

int main() {
    int M, N;
    scanf("%d %d", &M, &N);
    int gcd;
    while (N != 0) {
        gcd = N;
        N = M % N;
        M = gcd;
    }
    printf("%d", M);
    return 0;
}

