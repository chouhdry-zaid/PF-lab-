#include<stdio.h>
int main(){
    int image[3][3];
    int (*ptr)[3]=image;
    printf("Enter the values of 9 pixels:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",*(ptr+i)+j);
            /* code */
        }
        /* code */
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            *(*(ptr+i)+j)=*(*(ptr+i)+j)*2;
            /* code */
        }
        /* code */
    }
    printf("Updated image:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",*(*(ptr+i)+j));
            /* code */
        }
        printf("\n");
        /* code */
    }
    return 0;
}