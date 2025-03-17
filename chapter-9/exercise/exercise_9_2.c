#include <stdio.h>

char gradeStudent(int score) {
    if (score >= 90) {
        return 'A';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int score;
    printf("Enter the student's score: ");
    scanf("%d", &score);
    //char grade = gradeStudent(score);
    printf("The student's grade is: %c\n", gradeStudent( score));
    return 0;
}