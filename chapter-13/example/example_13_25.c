//Example 13.25 To illustrate passing one function as an argument to another function
#include<stdio.h>
int lessthan(int,int);
int greaterthan(int,int);
void sort(int a[], int n, int(*fnp)(int,int));

int main(){
    int i,n;
    printf("Enter the number of values\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d values\n",n);
    for(i=0;i<n;i++){
        scanf("%d",a+i);
    }
    printf("\n\nUnsorted List:: ");
     for(i=0;i<n;i++){
        printf("%4d ",a[i]);
    }
    
    sort(a,n,lessthan);
    printf("\n\nSorted in decreasing order:: ");
     for(i=0;i<n;i++){
        printf("%4d ",a[i]);
    }

    sort(a,n,greaterthan);
    printf("\n\nSorted in increasing order:: ");
     for(i=0;i<n;i++){
        printf("%4d ",a[i]);
    }

    return(0);
}

int lessthan(int a, int b){
    return (a<b);
}

int greaterthan(int a, int b){
    return (a>b);
}

void sort(int a[], int n, int(*fnp)(int,int)){
    int i, j, t;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(fnp(a[i],a[j])){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
}