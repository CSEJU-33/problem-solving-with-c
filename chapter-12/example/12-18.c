#include <stdio.h>

enum subjects {
    kannada,
    english,
    physics,
    maths,
    computers
};

int main(void) {
    int marks[5];
    enum subjects subject;

    printf("Enter marks in five subjects (Kannada, English, Physics, Maths, Computers):\n");
    for (subject = kannada; subject <= computers; subject++) {
        scanf("%d", &marks[subject]);
    }

    printf("Marks in Different Subjects:\n");
    printf("Kannada: %d\n", marks[kannada]);
    printf("English: %d\n", marks[english]);
    printf("Physics: %d\n", marks[physics]);
    printf("Maths: %d\n", marks[maths]);
    printf("Computers: %d\n", marks[computers]);

    return 0;
}