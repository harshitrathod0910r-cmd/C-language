#include <stdio.h>

int main() {
    int startYear, endYear, currentYear;

    printf("Enter the starting year: ");
    scanf("%d", &startYear);

    printf("Enter the ending year: ");
    scanf("%d", &endYear);

    printf("Leap years between %d and %d are:\n", startYear, endYear);

    currentYear = startYear; // Initialize with the starting year

    while (currentYear <= endYear) { // Loop through each year in the range
        // Leap year conditions
        if ((currentYear % 4 == 0 && currentYear % 100 != 0) || (currentYear % 400 == 0)) {
            printf("%d\n", currentYear); // Print if it's a leap year
        }
        currentYear++; // Move to the next year
    }

    return 0;
}