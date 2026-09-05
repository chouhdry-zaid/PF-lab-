#include<stdio.h>
int main () {
    char prn[100];
    printf("Enter product name:\n");
    fgets(prn,sizeof(prn),stdin);
    int quan;
    printf("Enter the quantity of product:\n");
    scanf("%d",&quan);
    float price;
    printf("Enter the price of product:\n");
    scanf("%f",&price);
    printf("Product name:%s\n",prn);
    printf("Quantity:%d\n",quan);
    printf("Price:%.2f\n",price);

    return 0;
}