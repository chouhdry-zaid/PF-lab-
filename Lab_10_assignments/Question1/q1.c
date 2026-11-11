#include <stdio.h>
#include <string.h>

int main() {
    char s1[200];
    char s2[300] = "";
    char *p;

    // taking input lol
    printf("Enter feedback:\n");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';

    // getting length
    printf("len: %lu\n", strlen(s1));

    // checking words
    if (strstr(s1, "good") != NULL) {
        printf("found good\n");
    } else if (strstr(s1, "bad") != NULL) {
        printf("found bad\n");
    } else {
        printf("nothing special\n");
    }

    // replacing bad thing
    p = strstr(s1, "bad");
    if (p != NULL) {
        int x = p - s1;
        strncat(s2, s1, x);
        strcat(s2, "not good");
        strcat(s2, p + 3);
        printf("new review: %s\n", s2);
    } else {
        printf("new review: %s\n", s1);
    }

    return 0;
}
