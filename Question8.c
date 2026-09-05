#include<stdio.h>
int main () {
    char fullname[50];
    printf("Enter your fullname :\n");
    fgets(fullname,sizeof(fullname),stdin);



    printf("Hello,\n");
    printf("%s\n",fullname);
    return 0;
}