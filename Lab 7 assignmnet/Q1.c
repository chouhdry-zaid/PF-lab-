#include<stdio.h>
int main(){
    char name[3][50];
    int marks[3][3];
    for (int i = 0; i <3; i++)
    {
        printf("enter your fullname:\n");
        scanf(" %49[^\n]",name[i]);
        for (int j = 0; j<3; j++)
        {
            printf("enter your marks 1-1:\n");
            scanf("%d",&marks[i][j]);
        }
        
        /* code */
    }
    for (int i = 0; i <3; i++)
    {
        printf("student%d: %s\n",i+1, name[i]);
        for (int j = 0; j<3; j++)
        {
            printf("subject %d: %d\n",j+1,marks[i][j]);

            /* code */
        }
        
        /* code */
    }
    return 0;
    
}