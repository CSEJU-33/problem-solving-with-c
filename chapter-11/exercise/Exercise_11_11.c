#include<stdio.h>
#include<string.h>

int main()
{
    char ch[50];
	printf("Enter a string: ");
    gets(ch);
	printf("\nThe number of characters: ");
	fflush(stdin);
    int n,k;
    scanf("%d",&n); 
    int t = strlen(ch);
    k = t - n;
	printf("Extracted string: ");
    while(ch[k] != '\0')
    { 
        printf("%c",ch[k]);
        k++;
    }
}