#include<stdio.h>
#include<math.h>

int main()
{
    int choice;
    double num;
    double num2;

    printf("1. Square Root\n");
    printf("2. Power\n");
    printf("3. Absolute Value\n");
    printf("4. Floor\n");
    printf("5. Ceiling\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Enter number: ");
            scanf("%lf",&num);

            if(num >= 0)
            {
                printf("Square Root = %.2lf",sqrt(num));
            }
            else
            {
                printf("Invalid input");
            }
            break;

        case 2:
            printf("Enter base: ");
            scanf("%lf",&num);

            printf("Enter exponent: ");
            scanf("%lf",&num2);

            printf("Power = %.2lf",pow(num,num2));
            break;

        case 3:
            printf("Enter number: ");
            scanf("%lf",&num);

            printf("Absolute Value = %.2lf",fabs(num));
            break;

        case 4:
            printf("Enter number: ");
            scanf("%lf",&num);

            printf("Floor = %.2lf",floor(num));
            break;

        case 5:
            printf("Enter number: ");
            scanf("%lf",&num);

            printf("Ceiling = %.2lf",ceil(num));
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}