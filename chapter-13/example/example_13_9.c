//Example 13.9 To illustrate pointers to strings
#include<stdio.h>
int main()
{
    char str[20],*cp;
    printf("Enter a string \n");
    scanf("%s", str);
    cp=str;
    printf("string in str=%s\n",cp);
    cp="abcd";
    printf("%s\n",cp);
    return(0);
}