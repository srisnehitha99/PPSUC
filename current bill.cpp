#include <stdio.h>

int main() {
    int units;
    float bill, total;
    scanf("%d", &units);

    if (units <= 199)
        bill = units * 1.20;
    else if (units < 400)
        bill = units * 1.50;
    else if (units < 600)
        bill = units * 1.80;
    else
        bill = units * 2.00;

    if (bill > 400)
        total = bill + bill * 0.15;
    else
        total = bill + 100;

    printf("%.2f", total);

    return 0;
}
