#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_STRING 100

typedef struct {
    int book_id;
    char author_name[MAX_STRING];
    float price;
    int no_of_pages;
    char publisher[MAX_STRING];
    int year_of_publishing;
} Book;

void read_books(Book books[], int *count, const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Failed to open file");
        exit(EXIT_FAILURE);
    }

    *count = 0;
    while (fscanf(file, "%d %s %f %d %s %d", &books[*count].book_id, books[*count].author_name, &books[*count].price, 
                  &books[*count].no_of_pages, books[*count].publisher, &books[*count].year_of_publishing) == 6) {
        (*count)++;
    }

    fclose(file);
}

void write_books(Book books[], int count, const char *filename) {
    FILE *file = fopen(filename, "w");
    if (!file) {
        perror("Failed to open file");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "%d %s %.2f %d %s %d\n", books[i].book_id, books[i].author_name, books[i].price, 
                books[i].no_of_pages, books[i].publisher, books[i].year_of_publishing);
    }

    fclose(file);
}

int compare_books(const void *a, const void *b) {
    return strcmp(((Book *)a)->author_name, ((Book *)b)->author_name);
}

int main() {
    Book books[MAX_BOOKS];
    int count;

    read_books(books, &count, "books.txt");
    qsort(books, count, sizeof(Book), compare_books);
    write_books(books, count, "sorted_books.txt");

    printf("Books sorted by author names and written to 'sorted_books.txt'.\n");

    return 0;
}