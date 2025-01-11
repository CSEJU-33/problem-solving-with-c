//Example 13.8 To find out whether a matric is an identity matric or not
#include<stdio.h>
int main(){
    int a[10][10],i,j,m,n,flag;

    printf("Enter the number of rows\n");
    scanf("%d",&m);
    printf("Enter the number of columns\n");
    scanf("%d",&n);

    if(m!=n){
        printf("The matric should be a square matrix\n");
        exit(0);
    }

    printf("Enter the elements of the matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            scanf("%d",*(a+i)+j);
        printf("\n");
    }
    flag=1;
    for(i=0;i<m;i++)
    for(j=0;j<n;j++){
        if((i==j)&& (*(*(a+i)+j)!=1)){
            flag=0;
            break;
        }
        if((i!=j)&& (*(*(a+i)+j)!=0)){
            flag=0;
            break;
        }
    }
    printf("The matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            printf("%4d ",*(*(a+i)+j));
        printf("\n");
    }
    if(flag)
        printf("is an Identity Matrix\n");
    else
        printf("is not an Identity Matrix");
    
    return(0);
}