#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of words: ");
    scanf("%d", &n);
    char sentence[500] = "", word[50];

    for (int i = 0; i < n; i++) {
        printf("Enter word %d: ", i + 1);
        scanf("%s", word);
        strcat(sentence, word);
        if (i != n - 1) strcat(sentence, " ");
    }

    strcat(sentence, ".");
    printf("Sentence: %s\n", sentence);
    return 0;
}
