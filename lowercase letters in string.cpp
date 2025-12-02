#include <stdio.h>

int main() {
    char s[10005];
    int count = 0;

    // Read a full line including spaces
    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 0;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
