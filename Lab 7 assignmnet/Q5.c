#include<stdio.h>
int main(){
    char sentences[3][100];
    int vowels;
    for (int i = 0; i < 3; i++)
    {
        scanf(" %99[^;]%*c",sentences[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        vowels=0;
        for (int j = 0; sentences[i][j]!='\0'; j++)
        {
            char c=sentences[i][j];
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
            {
                vowels++;
            }
        }
        printf("Sentence %d: %s\n",i+1,sentences[i]);
        printf("Vowels: %d\n",vowels);
    }
    return 0;
}