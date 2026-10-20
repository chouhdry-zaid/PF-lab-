#include<stdio.h>
#include<string.h>
int main(){
    char username[30];
    char status[30];
    char timespam[30];
    printf("enter the three strings using commas:");
    scanf("%[^,],%[^,],%s",username,status,timespam);
    int count=0;
    char logs[3][30];
    strcpy(logs[0],username);
    strcpy(logs[1],status);
    strcpy(logs[2],timespam);
    for (int i = 0;i<3; i++)
    {
        for (int j = 0; logs[i][j]!='\0'; j++)
        {
            if (logs[i][j]>='A' && logs[i][j]<='Z')
            {
                count++;
                /* code */
            }
            
            /* code */
        }
        
        /* code */
    }
    printf("Total no; of upper case characters are %d\n",count);
    //for test
    printf("username %s, status %s, timespam %s",username,status,timespam);

    



}