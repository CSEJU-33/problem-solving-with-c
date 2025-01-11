//Example 13.28 To allocate memory for employee details dynamically
#include<stdio.h>
#include<malloc.h>

struct emp{
    int empno;
    char name[20];
    float salary;
};

int main(){
    struct emp *ep;
    int n,i;

    printf("Enter the number of the employees\n");
    scanf("%d",&n);

    printf("Enter %d employee details\n",n);
    for(i=0;i<n;i++)
        scanf("%d %s %f", &ep[i].empno, &ep[i].name, &ep[i].salary);
    printf("Employees Details\n");
    for(i=0;i<n;i++)
        printf("%6d %-20s %8.2f \n", ep[i].empno, ep[i].name, ep[i].salary);
    free(ep);

    return(0);
}