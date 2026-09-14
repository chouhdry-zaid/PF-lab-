#include <stdio.h>

int main() {
    float accuracy, latency;
    int approval;

    printf("Enter model accuracy: ");
    scanf("%f", &accuracy);

    printf("Enter prediction latency: ");
    scanf("%f", &latency);

    printf("Enter approval status (1 = Approved, 0 = Not Approved): ");
    scanf("%d", &approval);

    if (accuracy < 90)
        printf("Accuracy too low\n");

    if (latency > 100)
        printf("Latency too high\n");

    if (approval == 0)
        printf("Model not approved\n");

    if (accuracy >= 90 && latency <= 100 && approval == 1)
        printf("Model can be deployed");

    return 0;
}