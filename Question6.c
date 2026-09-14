#include <stdio.h>

int main() {
    int obstacle, person, battery;

    printf("Enter obstacle: ");
    scanf("%d", &obstacle);

    printf("Enter person: ");
    scanf("%d", &person);

    printf("Enter battery: ");
    scanf("%d", &battery);

    if (obstacle == 1) {
        if (person == 1) {
            printf("Emergency Stop");
        }
        else {
            printf("Change Direction");
        }
    }
    else {
        if (battery < 20) {
            printf("Return to Charging Station");
        }
        else {
            printf("Continue Moving");
        }
    }

    return 0;
}