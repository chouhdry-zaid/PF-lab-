#include <stdio.h>
#include <string.h>

int main() {
    char arr[10][50];
    char t[50];

    // input names
    printf("Enter 10 names:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%s", arr[i]);
    }

    // sorting array using bubble sort sort thing
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                // swapping
                strcpy(t, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], t);
            }
        }
    }

    // print output
    printf("\nSorted list:\n");
    for (int i = 0; i < 10; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}
