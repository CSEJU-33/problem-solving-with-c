//Example 13.20 To find the length of a string a user-defined function [simulator of strlen()]
#include<stdio.h>
int str_len(char *p);
int main(){
    char str[20];
    int length;
    printf("Enter a string\n");
    scanf("%s",str);
    length=str_len(str);
    printf("Length=%d\n",length);
    return(0);
}
int str_len(char *p){
    int l=0;
    while(*p!='\0'){
        l++;
        p++;
    }
    return(l);
}