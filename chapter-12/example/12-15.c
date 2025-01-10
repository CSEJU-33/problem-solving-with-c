#include <stdio.h>

struct book {
    char author[20];
    char title[20];
    int pages;
    float price;
};

struct book update(struct book b, int p, float pr) {
    b.pages += p;
    b.price += pr;
    return b;
}

int main(void) {
    struct book b = {"Manjunath", "Basic Electronics", 288, 125.0}, ub;
    int p;
    float pr;

    printf("Enter the number of pages increased by \n");
    scanf("%d", &p);
    printf("Enter the price increased by \n");
    scanf("%f", &pr);

    ub = update(b, p, pr);

    printf("Updated book details \n");
    printf("Author = %s \n", ub.author);
    printf("Title = %s \n", ub.title);
    printf("Pages = %d \n", ub.pages);
    printf("Price = %6.2f \n", ub.price);

    return 0;
}