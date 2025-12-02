#include <stdio.h>
#include <limits.h>

int reverse(int N) {
    int rev = 0;
    while (N != 0) {
        int pop = N % 10;
        N /= 10;
        if (rev > INT_MAX/10 || (rev == INT_MAX/10 && pop > 7)) return 0;
        if (rev < INT_MIN/10 || (rev == INT_MIN/10 && pop < -8)) return 0;
        rev = rev * 10 + pop;
    }
    return rev;
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%d", reverse(N));
    return 0;
}
