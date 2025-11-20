#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units > 200) {
        bill = units * 8.0;
    } else if (units > 100 && units <= 200) {
        bill = units * 10.0;
    } else {
        bill = units * 5.0;
    }

    printf("\nElectric Bill:\n");
    printf("Units Consumed: %d\n", units);
    printf("Bill Amount: ₹%.2f\n", bill);

    return 0;
}
