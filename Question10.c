#include<stdio.h>
int main () {
    char name[100];
    printf("Enter your age:\n");
    fgets(name,sizeof(name),stdin);
    int age;
    printf("Enter your age:\n");
    scanf("%d",&age);
    char grade;
    printf("Enter your grade:\n");
    scanf(" %c",&grade);
    float height;
    printf("Enter your height:\n");
    scanf("%f",&height);
    float CGPA;
    printf("Enter your CGPA:\n");
    scanf("%f",&CGPA);
    printf("Your name is:%s\n",name);
    printf("Your age is:%d\n",age);
    printf("Your grade is:%c\n",grade);
    printf("Your height is:%.2f\n",height);
    printf("Your CGPA is:%.2f\n",CGPA);
    return 0;
}