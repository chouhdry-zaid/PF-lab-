#include<stdio.h>
int main () {
    int age;
    printf("Enter your age:\n");
    scanf("%d",&age);
    char name[50];
    printf("Enter your name:\n");
    scanf("%s",&name);
    char city[50];
    printf("Enter your city:\n");
    scanf("%s",&city);
    printf("Your name is:%s\n",name);
    printf("Your age is:%d\n",age);
    printf("Your city is:%s\n",city);
    return 0;
}