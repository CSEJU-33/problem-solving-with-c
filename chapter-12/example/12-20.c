#include <stdio.h>

typedef struct {
    char author[20];
    char title[20];
    int pages;
    float price;
} book;

int main(void) {
    book b;

    printf("Enter the details of a book \n");
    scanf("%s%s%d%f", b.author, b.title, &b.pages, &b.price);

    printf("Author: %s \n", b.author);
    printf("Title: %s \n", b.title);
    printf("Pages: %d \n", b.pages);
    printf("Price: %7.2f \n", b.price);

    return 0;
}
