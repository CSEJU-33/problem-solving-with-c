#include <stdio.h>

enum week_day {
    sunday = 1,
    monday = 2,
    tuesday = 3,
    wednesday = 4,
    thursday = 5,
    friday = 6,
    saturday = 7
};

int main(void) {
    int n;
    printf("Enter the day number [1-7]\n");
    scanf("%d", &n);

    switch (n) {
        case sunday:
            printf("Sunday\n");
            break;
        case monday:
            printf("Monday\n");
            break;
        case tuesday:
            printf("Tuesday\n");
            break;
        case wednesday:
            printf("Wednesday\n");
            break;
        case thursday:
            printf("Thursday\n");
            break;
        case friday:
            printf("Friday\n");
            break;
        case saturday:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid day number\n");
    }

    return 0;
}
