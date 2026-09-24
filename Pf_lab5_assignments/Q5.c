#include<stdio.h>

int main()
{
    int confidence;
    int usertype;

    printf("Enter confidence score: ");
    scanf("%d",&confidence);

    printf("Enter user type (1-Authorized, 2-Unauthorized): ");
    scanf("%d",&usertype);

    if(confidence >= 80)
    {
        printf("Face Recognized\n");

        if(usertype == 1)
        {
            printf("Access Granted");
        }
        else
        {
            printf("Access Denied");
        }
    }
    else if(confidence >= 50 && confidence <= 79)
    {
        printf("Manual Verification");
    }
    else
    {
        printf("Access Denied");
    }

    return 0;
}