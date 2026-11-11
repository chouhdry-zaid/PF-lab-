#include <stdio.h>
#include <stdlib.h>

int main() {
    char n[50];
    int ac;
    float w;
    FILE *fp;

    // getting details
    printf("Name: ");
    scanf("%s", n);
    printf("Account: ");
    scanf("%d", &ac);
    printf("Amount: ");
    scanf("%f", &w);

    // open file
    fp = fopen("bank_log.txt", "a");
    if (fp == NULL) {
        printf("err\n");
        exit(1);
    }

    // write to file
    fprintf(fp, "%s %d %.2f\n", n, ac, w);
    fclose(fp);
    printf("logged successfully\n");

    return 0;
}
