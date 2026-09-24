#include<stdio.h>
int main() {
    int permission;
    printf("enter the no; to take an action\n");
    scanf("%d", &permission);
    if ((permission & 8)&&(permission &2))
    {
        printf("you are allowed to Deploy and Train\n");
    }
    else if (permission & 1)
    {
        printf("you can view\n");

    }
    else if(permission & 2){
        printf("you are allowed to train\n");
    }
    else if(permission & 4){
        printf("you are allowed to Test\n");
    }
    else if(permission & 8){
        printf("you are allowed to Deploy\n");
    }
    else
        printf("Not allowed\n");
    return 0;
    
}