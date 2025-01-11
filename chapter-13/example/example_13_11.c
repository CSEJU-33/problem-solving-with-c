//Example 13.11 To sort a list  of names using array of pointers to strings
#include<stdio.h>
#include<string.h>
int main()
{
    char *t, *names[5]={"Nishu", "Harsha", "Shobha", "Devraj", "Asha"};
    int i,j;
    printf("The unsorted list of five names\n");
    for(i=0;i<5;i++)
        printf("%s\n", names[i]);
    
    //sorting begins
    for(i=0;i<4;i++)
    for(j=i+1;j<5;j++)
        if(strcmp(names[i],names[j])>0){
            t=names[i];
            names[i]=names[j];
            names[j]=t;
        }
    //sorting ends

    printf("\nsorted list of names\n");
    for(i=0;i<5;i++)
        printf("%s\n",names[i]);
    return(0);
}