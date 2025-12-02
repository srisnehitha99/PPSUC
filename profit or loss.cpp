#include <stdio.h>

int main() {
    int cost, selling;
    scanf("%d %d", &cost, &selling);

    if (selling > cost)
        printf("Profit");
    else if (cost > selling)
        printf("Loss");
    else
        printf("No Profit and No Loss");

    return 0;
}
