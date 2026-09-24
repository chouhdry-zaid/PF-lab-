#include<stdio.h>

int main()
{
    int age;
    int income;
    int credit;
    int loan;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter monthly income: ");
    scanf("%d", &income);

    printf("Enter credit score: ");
    scanf("%d", &credit);

    printf("Enter existing loan (1-Yes, 0-No): ");
    scanf("%d", &loan);

    if(age >= 21 && income >= 100000 && credit >= 750 && loan == 0)
    {
        printf("High Approval Chance");
    }
    else if(age >= 21 && income >= 75000 && credit >= 650 && loan == 1)
    {
        printf("Manual Review");
    }
    else if(age >= 21 && income >= 50000 && credit >= 600)
    {
        printf("Possibly Eligible");
    }
    else
    {
        printf("Rejected");
    }

    return 0;
}