#include<stdio.h>
int main () {
    printf("Welcome to C programming\n");
    
    char name[50];
    printf("Enter your name:\n");
    scanf("%s",&name);
    int age;
    printf("Enter your age:\n");
    scanf("%d",&age);
    char grade;
    printf("Enter your grade:\n");
    scanf(" %c",&grade);
    printf("Name:%s\n",name);
    printf("Age:%d\n",age);
    printf("Grade:%c\n",grade);
    printf("File Path:C:\\User\\Student\n");
    printf("He said:\"Hello\"");
    return 0;
}