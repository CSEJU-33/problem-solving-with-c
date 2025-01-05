#include <stdio.h>
//Decimal to binary

void toBinary(int n)
{
    int i, mask, result;

    for (i = 15; i >= 0; i--)
    {
        mask = 1 << i;
        result = mask & n;
        if (result != 0)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}

int main()
{
    int n;

    printf("Enter a Decimal number: ");
    scanf("%d", &n);

    printf("The Binary equivalent of %d = ", n);
    toBinary(n);
    return 0;
}
