#include <stdio.h>
#include <string.h>

int main() {
    char e[100];
    char d[50];
    char *p;

    // get email
    printf("Enter email: ");
    scanf("%s", e);

    // find @
    p = strchr(e, '@');

    if (p == NULL) {
        printf("Invalid Email Format\n");
    } else {
        // copy after @
        strcpy(d, p + 1);
        printf("Domain is: %s\n", d);
    }

    return 0;
}
