//Example 13.22 To concatenate two strings using a user-defined function [simulator of strcpy()]
#include<stdio.h>
#include<string.h>
char* str_cat(char *t, char *s);

int main(){
    char s[20]="abcd", t[20]="xyz";
    printf("t=%s\n",t);
    printf("s=%s\n",s);
    str_cat(t,s);
    printf("After concatenation: ");
    printf("t = %s\n",t);
    return(0);
}

char* str_cat(char*t, char*s){
    char *ts;
    ts=t;
    int l;
    l=strlen(t);
    while(*s!='\0'){
        *(t+l)=*s;
        s++;
        t++;
    }
    *(t+l)='\0';
    return(ts);
}