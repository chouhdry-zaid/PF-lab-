#include<stdio.h>
int main () {
    int age;
    printf("Enter your age:\n");
    scanf("%d",&age);
    float height;
    printf("Enter your height:\n");
    scanf("%f",&height);
    char grade;
    printf("Enter your grade:\n");
    scanf(" %c",&grade);
    printf("Your age is:%d\n",age);
    printf("Your height is:%.2f\n",height);
    printf("Your grade is:%c\n",grade);
    return 0;
}