#include<stdio.h>

int main()
{
    int choice;
    int algorithm;

    printf("Enter problem type:\n");
    printf("1. Classification\n");
    printf("2. Regression\n");
    printf("3. Clustering\n");
    printf("4. Computer Vision\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("1. Logistic Regression\n");
            printf("2. Decision Tree\n");
            printf("3. KNN\n");
            scanf("%d",&algorithm);

            switch(algorithm)
            {
                case 1:
                    printf("Logistic Regression");
                    break;
                case 2:
                    printf("Decision Tree");
                    break;
                case 3:
                    printf("KNN");
                    break;
                default:
                    printf("Invalid choice");
            }
            break;

        case 2:
            printf("1. Linear Regression\n");
            printf("2. Polynomial Regression\n");
            printf("3. SVR\n");
            scanf("%d",&algorithm);

            switch(algorithm)
            {
                case 1:
                    printf("Linear Regression");
                    break;
                case 2:
                    printf("Polynomial Regression");
                    break;
                case 3:
                    printf("SVR");
                    break;
                default:
                    printf("Invalid choice");
            }
            break;

        case 3:
            printf("1. K-Means\n");
            printf("2. Hierarchical Clustering\n");
            printf("3. DBSCAN\n");
            scanf("%d",&algorithm);

            switch(algorithm)
            {
                case 1:
                    printf("K-Means");
                    break;
                case 2:
                    printf("Hierarchical Clustering");
                    break;
                case 3:
                    printf("DBSCAN");
                    break;
                default:
                    printf("Invalid choice");
            }
            break;

        case 4:
            printf("1. CNN\n");
            printf("2. YOLO\n");
            printf("3. R-CNN\n");
            scanf("%d",&algorithm);

            switch(algorithm)
            {
                case 1:
                    printf("CNN");
                    break;
                case 2:
                    printf("YOLO");
                    break;
                case 3:
                    printf("R-CNN");
                    break;
                default:
                    printf("Invalid choice");
            }
            break;

        default:
            printf("Invalid problem type");
    }

    return 0;
}