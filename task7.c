#include <stdio.h>

int main() {
    char city[50];
    char country[50];
    int population;
    float area;
    char grade;

    printf("Enter your city: ");
    scanf("%s", city);

    printf("Enter your country: ");
    scanf("%s", country);

    printf("Enter population: ");
    scanf("%d", &population);

    printf("Enter area: ");
    scanf("%f", &area);

    printf("Enter grade: ");
    scanf(" %c", &grade); // Note the space before %c to ignore leading whitespace/newlines

    // Printing output as requested
    printf("\nYou live in %s, %s.\n", city, country);
    printf("Population: %d\n", population);
    printf("Area: %.2f\n", area);
    printf("Grade: %c\n", grade);

    return 0;
}