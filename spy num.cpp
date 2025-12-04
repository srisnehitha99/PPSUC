#include <stdio.h>

int main() {
    int N, sum = 0, product = 1, digit;
    scanf("%d", &N);
    int temp = N;
    while(temp > 0) {
        digit = temp % 10;
        sum += digit;
        product *= digit;
        temp /= 10;
    }
    if(sum == product)
        printf("Spy Number");
    else
        printf("Not Spy Number");
    return 0;
}
