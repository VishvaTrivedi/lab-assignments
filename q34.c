// PRINT FIBONACCI SERIES.(0,1,1,2,3…) 
#include<stdio.h>
void main(){
    int n, fibo[n];

    printf("enter the value of n :");
    scanf("%d", &n);

    printf("fibonacci series :\n");

    fibo[0]=0;
    fibo[1]=1;
    for(int i=2;i<=n;i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }

    printf("\n");
}