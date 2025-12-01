#include <stdio.h>

int isPalindrome(int n) {
    int original = n, reversed = 0;
    while(n > 0) {
        reversed = reversed * 10 + n % 10;
        n = n / 10;
    }
    return original == reversed;
}

int main() {
    int N;
    scanf("%d", &N);
    if(isPalindrome(N))
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
