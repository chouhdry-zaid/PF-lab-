#include<stdio.h>
#include<string.h>
int main(){
    int words=0, count=0;
    char secret_messages[3][100];
    for (int i = 0; i < 3; i++)
    {
        printf("enter the upper cased string:\n");
        scanf(" %99[A-Z ]",secret_messages[i]);
        /* code */
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; secret_messages[i][j]!='\0'; j++)
        {
            if (secret_messages[i][j]==' ')
            {
                count++;
                words++;
                /* code */
            }
            
            /* code */
        }
        
        /* code */
    }
    for (int i = 0; i <3; i++)
    {
        printf("the %d string is '%s'.\n",i+1,secret_messages[i]);
        printf("the words it contain is %d\n",words);
        printf("the spaces it contain is %d\n",count);
        
        /* code */
    }
    
    
    
}