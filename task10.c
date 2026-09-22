#include <stdio.h>

int main() {
    float number;

    printf("Enter a floating-point number: ");
    scanf("%f", &number);

    printf("Formatted with 1 decimal place: %.1f\n", number);
    printf("Formatted with 3 decimal places: %.3f\n", number);

    return 0;
}