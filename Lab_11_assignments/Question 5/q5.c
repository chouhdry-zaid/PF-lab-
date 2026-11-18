#include<stdio.h>
struct Item{
    int id;
    char name[50];
    int quantity;
    float unitPrice;
};
int main(){
    struct Item items[5];
    float total=0;
    int searchID;
    int found=0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter details of item %d\n",i+1);
        printf("ID: ");
        scanf("%d",&items[i].id);
        printf("Name: ");
        scanf("%s",items[i].name);
        printf("Quantity: ");
        scanf("%d",&items[i].quantity);
        printf("Unit Price: ");
        scanf("%f",&items[i].unitPrice);
        total=total+items[i].quantity*items[i].unitPrice;
    }
    printf("\nTotal inventory value: %.2f\n",total);
    printf("Enter item ID to search: ");
    scanf("%d",&searchID);
    for (int i = 0; i < 5; i++)
    {
        if(items[i].id==searchID){
            printf("Item found\n");
            printf("ID: %d\n",items[i].id);
            printf("Name: %s\n",items[i].name);
            printf("Quantity: %d\n",items[i].quantity);
            printf("Unit Price: %.2f\n",items[i].unitPrice);
            found=1;
        }
    }
    if(found==0){
        printf("Item not found\n");
    }
    return 0;
}
