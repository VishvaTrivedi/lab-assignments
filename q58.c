//READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDATION OF THOSE ARRAYS INTO THIRD
#include<stdio.h>
void main(){
    int i, a[10], b[10], c[10];

    printf("Enter the elements of array A :");
    for(i=0;i<10;i++){
        scanf("%d", &a[i]);
    }

    printf("Enter the elements of array B :");
    for(i=0;i<10;i++){
        scanf("%d", &b[i]);
    }

    for(i=0;i<10;i++){
        c[i] = a[i] + b[i];
    }

    printf("The elements of array C are : ");
    for(i=0;i<10;i++){
        printf("%d", c[i]);
        printf("\n");
    }

}