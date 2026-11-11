#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char eu[50], ep[50];
    char su[50], sp[50];
    FILE *fp;

    // user input
    printf("User: ");
    scanf("%s", eu);
    printf("Pass: ");
    scanf("%s", ep);

    // open credentials file
    fp = fopen("credentials.txt", "r");
    if (fp == NULL) {
        printf("error opening file\n");
        exit(1);
    }

    fscanf(fp, "%s %s", su, sp);
    fclose(fp);

    // check match
    if (strcmp(eu, su) == 0 && strcmp(ep, sp) == 0) {
        printf("Access Granted!\n");
    } else {
        printf("Access Denied!\n");
    }

    return 0;
}
