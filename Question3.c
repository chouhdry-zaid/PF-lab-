#include <stdio.h>

int main() {
    int total, missing, duplicate;
    float missingPercent, duplicatePercent;

    printf("Enter total records: ");
    scanf("%d", &total);

    printf("Enter missing records: ");
    scanf("%d", &missing);

    printf("Enter duplicate records: ");
    scanf("%d", &duplicate);

    if (total <= 0)
        printf("Invalid Dataset");
    else {
        missingPercent = (missing * 100.0) / total;
        duplicatePercent = (duplicate * 100.0) / total;

        if (missingPercent > 30)
            printf("Poor Quality Dataset");
        else if (duplicatePercent > 20)
            printf("Dataset Requires Cleaning");
        else
            printf("Dataset Ready for Training");
    }

    return 0;
}