#include <stdio.h>

int main() {
    int M, N, lcm;
    scanf("%d %d", &M, &N);

    int max = (M > N) ? M : N;
    lcm = max;
    while(1) {
        if (lcm % M == 0 && lcm % N == 0) {
            printf("%d", lcm);
            break;
        }
        lcm++;
    }
    return 0;
}

