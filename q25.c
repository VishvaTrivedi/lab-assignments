//PRINT TABLE OF ANY NO.
#include<stdio.h>
void main(){
    int n;

    printf("Enter the number jiska table print karvana hai : ");
    scanf("%d", &n);

    for(int i=1;i<11;i++){
        printf("%d*%d = %d\n", n, i, n*i);
    }
}