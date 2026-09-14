#include <stdio.h>

int main() {
    int role, status, security;

    printf("Enter role: ");
    scanf("%d", &role);

    printf("Enter status: ");
    scanf("%d", &status);

    printf("Enter security level: ");
    scanf("%d", &security);

    if (status == 0) {
        printf("Access Denied");
    }
    else if (role == 1 && security >= 3) {
        printf("Admin Access");
    }
    else if (role == 2 && security >= 2) {
        printf("Researcher Access");
    }
    else if (role == 3 && security >= 1) {
        printf("Student Access");
    }
    else {
        printf("Access Denied");
    }

    return 0;
}