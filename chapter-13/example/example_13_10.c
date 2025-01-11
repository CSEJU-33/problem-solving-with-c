//Example 13.10 To illustrate an array of pointers to strings
#include<stdio.h>
int main()
{
    char *names[5]={"Nishu", "Harsha","Shobha", "Devraj", "Asha"};
    int i;
    printf("The list of five Names\n");
    for(i=0;i<5;i++){
        printf("%s\n",names[i]);
    }
    return(0);
}