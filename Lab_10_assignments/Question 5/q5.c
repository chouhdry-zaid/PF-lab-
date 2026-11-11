#include <stdio.h>
#include <stdlib.h>

int main() {
    int r;
    char n[50];
    float m;
    FILE *fp;

    // open file for reading
    fp = fopen("marks.txt", "r");
    if (fp == NULL) {
        printf("Error: File Not Found!\n");
        exit(1);
    }

    // reading file until end
    while (fscanf(fp, "%d %s %f", &r, n, &m) == 3) {
        printf("%d %s %.2f\n", r, n, m);
    }

    fclose(fp);
    return 0;
}
