#include<stdio.h>
#include<string.h>
int main(){
    char word_grid[3][100];
    char array[30];
    char array2[30];
    int len=0, count=0;
    for (int i = 0; i < 3; i++)
    {
        scanf(" %99[^\n]",word_grid[i]);
        
    }
    int k=0;
    for (int i = 0;i<3 ; i++)
    {
        for (int j = 0; ; j++)
        {
            if (word_grid[i][j]==' ' || word_grid[i][j]=='\0')
            {
                array[j]='\0';
                j=0;
                array2[k++]=strlen(array[j]);
                if (word_grid[i][j]=='\0')
                {
                    break;
                    /* code */
                }
                
                /* code */
            }
            array[j]=word_grid[i][j];
            
            /* code */
        }
        
       
        /* code */
    }
    int flag=0, l=0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = i; j <9; j++)
        {
            if (array2[i]==array2[j])
            {
                continue;
                /* code */
            }else if (array2[i]>array2[j])
            {
                flag=1;
                l=i;
                /* code */
            }else{
                flag==0;
                break;
            }
            
            
            /* code */
        }
        
        /* code */
    }
    if (flag=1)
    {
        printf("at %d index the string is greater. ");
        /* code */
    }
    
    
    return 0;
}