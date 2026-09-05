#include <stdio.h>

int main()
{
    char name1[50],n2[50],n3[50];
    int age1,age2,age3;
    char grade1,grade2,grade3;

    printf("Enter name1: ");
    scanf("%s", name1);
    printf("Enter name2: ");
    scanf("%s", n2);
    printf("Enter name3: ");
    scanf("%s", n3);

    printf("Enter age1: ");
    scanf("%d", &age1);
    printf("Enter age2: ");
    scanf("%d", &age2);
    printf("Enter age3: ");
    scanf("%d", &age3);

    printf("Enter grade 1: ");
    scanf(" %c", &grade1);
    printf("Enter grade2: ");
    scanf(" %c", &grade2);
    printf("Enter grade3: ");
    scanf(" %c", &grade3);
    printf("%-10s %-10s %-10s\n","Name","Age","Grade");
    printf("%-10s %-10d %-10c\n",name1,age1,grade1);
    printf("%-10s %-10d %-10c\n",n2,age2,grade2);
    printf("%-10s %-10d %-10c\n",n3,age3,grade3);
    return 0;
}