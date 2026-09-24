#include<stdio.h>

int main()
{
    int choice;
    int subchoice;

    printf("Enter category:\n");
    printf("1. Greeting\n");
    printf("2. Study\n");
    printf("3. Weather\n");
    printf("4. Help\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("1. Hello\n");
            printf("2. How are you\n");
            printf("3. Goodbye\n");
            scanf("%d",&subchoice);

            switch(subchoice)
            {
                case 1:
                    printf("Hello");
                    break;
                case 2:
                    printf("I am fine");
                    break;
                case 3:
                    printf("Goodbye");
                    break;
                default:
                    printf("Invalid choice");
            }
            break;

        case 2:
            printf("1. Programming\n");
            printf("2. Mathematics\n");
            printf("3. AI\n");
            scanf("%d",&subchoice);

            switch(subchoice)
            {
                case 1:
                    printf("Programming is selected");
                    break;
                case 2:
                    printf("Mathematics is selected");
                    break;
                case 3:
                    printf("AI is selected");
                    break;
                default:
                    printf("Invalid choice");
            }
            break;

        case 3:
            printf("1. Today\n");
            printf("2. Tomorrow\n");
            printf("3. Forecast\n");
            scanf("%d",&subchoice);

            switch(subchoice)
            {
                case 1:
                    printf("Today's weather");
                    break;
                case 2:
                    printf("Tomorrow's weather");
                    break;
                case 3:
                    printf("Weather forecast");
                    break;
                default:
                    printf("Invalid choice");
            }
            break;

        case 4:
            printf("1. About Chatbot\n");
            printf("2. Commands\n");
            printf("3. Exit\n");
            scanf("%d",&subchoice);

            switch(subchoice)
            {
                case 1:
                    printf("This is an AI chatbot");
                    break;
                case 2:
                    printf("These are chatbot commands");
                    break;
                case 3:
                    printf("Exit");
                    break;
                default:
                    printf("Invalid choice");
            }
            break;

        default:
            printf("Invalid category");
    }

    return 0;
}