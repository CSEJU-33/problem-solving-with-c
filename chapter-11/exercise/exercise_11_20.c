#include <stdio.h>
#include <stdlib.h>

int isLeapYear(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int validateDate(int d, int m, int y) {
    if (y < 1 || m < 1 || m > 12 || d < 1) return 0;
    int daysInMonth[] = {31, 28 + isLeapYear(y), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return d <= daysInMonth[m - 1];
}

int totalDays(int d, int m, int y) {
    int days = d + (y - 1) * 365 + (y - 1) / 4 - (y - 1) / 100 + (y - 1) / 400;
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 0; i < m - 1; i++) days += daysInMonth[i];
    if (m > 2 && isLeapYear(y)) days++;
    return days;
}

int compareDates(int d1, int m1, int y1, int d2, int m2, int y2) {
    int t1 = totalDays(d1, m1, y1), t2 = totalDays(d2, m2, y2);
    return t1 == t2 ? 0 : (t1 < t2 ? -1 : 1);
}

int main() {
    char date1[11], date2[11];
    int d1, m1, y1, d2, m2, y2;

    scanf("%s %s", date1, date2);
    sscanf(date1, "%d-%d-%d", &d1, &m1, &y1);
    sscanf(date2, "%d-%d-%d", &d2, &m2, &y2);

    if (!validateDate(d1, m1, y1) || !validateDate(d2, m2, y2)) {
        printf("Invalid date(s)\n");
        return 1;
    }

    int diff = abs(totalDays(d1, m1, y1) - totalDays(d2, m2, y2));
    printf("Difference: %d days\n", diff);

    int cmp = compareDates(d1, m1, y1, d2, m2, y2);
    printf(cmp < 0 ? "Date 1 is earlier\n" : cmp > 0 ? "Date 1 is later\n" : "Dates are equal\n");

    return 0;
}
