#include <stdio.h>

int main() {
    float data, price, basicCost, discount, finalCost;

    printf("Enter data used: ");
    scanf("%f", &data);

    printf("Enter price per GB: ");
    scanf("%f", &price);

    basicCost = data * price;

    if (data < 50) {
        discount = 0;
    }
    else if (data < 100) {
        discount = basicCost * 0.05;
    }
    else if (data < 200) {
        discount = basicCost * 0.10;
    }
    else {
        discount = basicCost * 0.15;
    }

    finalCost = basicCost - discount;

    printf("Basic Cost = %.2f\n", basicCost);
    printf("Discount Amount = %.2f\n", discount);
    printf("Final Cost = %.2f\n", finalCost);

    return 0;
}