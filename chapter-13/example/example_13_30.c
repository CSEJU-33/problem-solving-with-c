//Example 13.30 To illustrate realloc() and free()
#include<stdio.h>
#include<malloc.h>
#include<string.h>

int main(){
    char *str;
    //allocate memory for string
    str=(char*)malloc(7);
    //copy "Mysore" into string
    strcpy(str, "Mysore");
    printf("String %s is at address %p\n", str, str);
    str=(char*)realloc(str,10);
    strcpy(str, "Bangalore");
    printf("String %s is at address %p\n", str, str);
    //free memory
    free(str);
    return(0);
}
