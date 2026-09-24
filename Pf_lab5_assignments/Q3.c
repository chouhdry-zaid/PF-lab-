#include<stdio.h>
int main() {
    int catagery;
    printf("enter the catagery(1-for Animal, 2-for Vehicle, 3-for Food, 4-for Human\n");
    scanf("%d", &catagery);
    int subcat;
    if(catagery == 1){
        
        printf("enter the sub-catagery(1-for Cat, 2-for Dog, 3-for Bird\n");
        scanf("%d",&subcat);
    }
    else if (catagery==2)
    {
        printf("enter the sub-catagery(1-for Car, 2-for Bus, 3-for Bike\n");
        scanf("%d",&subcat);
        /* code */
    }
    else if (catagery==3)
    {
        printf("enter the sub-catagery(1-for Pizza, 2-for Burger, 3-for Biryani\n");
        scanf("%d",&subcat);
        /* code */
    }
    else if (catagery==4)
    {
        printf("enter the sub-catagery(1-for Male, 2-for Female, 3-for Child\n");
        scanf("%d",&subcat);
        /* code */
    }
    
    else 
    printf("invalid input\n");
    
    switch (catagery)
    {
    case 1:
        switch (subcat)
        {
        
        case 1:
            printf("cat\n");
            break;
        
        case 2:
            printf("Dog\n");
            break;
        
        case 3:
            printf("Bird\n");
            break;
        }
        break;
    case 2:
        switch (subcat)
        {
        case 1:
            printf("Car\n");
            break;
        
        case 2:
            printf("Bus\n");
            break;
        
        case 3:
            printf("Bike\n");
            break;
        
        }
        break;
    case 3:
        switch (subcat)
        {
        case 1:
            printf("Pizza\n");
            break;
        
        case 2:
            printf("Burger\n");
            break;
        
        case 3:
            printf("Biryani\n");
            break;
        }
        break;
    
    case 4:
        switch (subcat)
        {
        case 1:
            printf("Male\n");
            break;
        
        case 2:
            printf("Female\n");
            break;
        
        case 3:
            printf("Child\n");
            break;
        }
        break;    
        
         
        
    default:
        printf("invalid input");
        break;
    
    }
    
}