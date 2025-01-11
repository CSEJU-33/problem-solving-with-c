//Example 13.23 To compare two strings using a user-defined function[simulator of strcmp()]
#include<stdio.h>
int str_cmp(char*s, char*t);

int main(){
    char s[20], t[20];
    printf("Enter a string into s\n");
    gets(s);
    printf("Enter a string into t\n");
    gets(t);
    if (str_cmp(s,t)>0)
        printf("s is greater than t");
    else if (str_cmp(s,t)<0)
        printf("s is less than t");
    else
        printf("s and t are equal");

    return(0);
}

int str_cmp(char*s, char*t){
    while((*s==*t)&&(*s!='\0')){
        s++;
        t++;
    }
    return(*s-*t);
}