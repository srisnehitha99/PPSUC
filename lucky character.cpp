#include <stdio.h>

int main() {
    char s[15];

    scanf("%s", s);  // S has length 10

    // 7th character is index 6 (0-based)
    printf("%c", s[6]);

    return 0;
}
