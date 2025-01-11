//Example 13.21 To copy one string to another string using a user-defined function [simulator of strcpy()]
#include<stdio.h>
char* str_cpy(char *t, char *s);

int main(){
    char s[20]="abcd", t[20];
    printf("s=%s\n",s);
    str_cpy(t,s);
    printf("t=%s\n",t);
    return(0);
}

char* str_cpy(char*t, char*s){
    char *ts;
    ts=t;
    while(*s!='\0'){
        *t=*s;
        s++;
        t++;
    }
    *t='\0';
    return(ts);
}