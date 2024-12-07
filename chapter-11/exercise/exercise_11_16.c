#include <stdio.h>
#include <string.h>

int binarySearch(char arr[][20], int n, char *target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        int cmp = strcmp(arr[mid], target);
        if (cmp == 0) return mid;
        else if (cmp < 0) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    char names[5][20] = {"Alice", "Bob", "Charlie", "David", "Eve"};
    char target[20];
    printf("Enter name to search: ");
    scanf("%s", target);

    int index = binarySearch(names, 5, target);
    if (index != -1)
        printf("Name found at index %d.\n", index);
    else
        printf("Name not found.\n");
    return 0;
}
