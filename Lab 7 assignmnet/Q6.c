#include<stdio.h>
int main(){
    int shifts[4][3];
    int index;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&shifts[i][j]);
        }
    }
    scanf("%d",&index);
    for (int i = 3; i > index; i--)
    {
        for (int j = 0; j < 3; j++)
        {
            shifts[i][j]=shifts[i-1][j];
        }
    }
    for (int j = 0; j < 3; j++)
    {
        scanf("%d",&shifts[index][j]);
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",shifts[i][j]);
        }
        printf("\n");
    }
    return 0;
}