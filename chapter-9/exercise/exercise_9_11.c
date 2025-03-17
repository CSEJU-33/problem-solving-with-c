#include <stdio.h>
#include <stdbool.h>

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            return (year % 400 == 0);
        }
        return true;
    }
    return false;
}

// Function to get the number of days in a month
int getDaysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return -1; // Invalid month
    }
}

int main() {
    int month, year;

    // Input the month and year
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    // Get the number of days in the month
    int days = getDaysInMonth(month, year);

    // Output the result
    if (days == -1) {
        printf("Invalid month entered.\n");
    } else {
        printf("Number of days = %d\n", days);
    }

    return 0;
}