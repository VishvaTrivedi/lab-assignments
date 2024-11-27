//READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE ARRAYS
#include<stdio.h>
void main(){
    int i, a[10], b[10], temp[10];

    printf("Enter the elements of array A :");
    for(i=0;i<10;i++){
        scanf("%d", &a[i]);
    }

    printf("Enter the elements of array B :");
    for(i=0;i<10;i++){
        scanf("%d", &b[i]);
    }

    printf("the elements of array A :");
    for(i=0;i<10;i++){
        printf("%d", &a[i]);
    }

    printf("the elements of array B :");
    for(i=0;i<10;i++){
        printf("%d", &b[i]);
    }

    for(i=0;i<10;i++){
        temp[i]=a[i];
        a[i]=b[i];
        b[i]=temp[i];
    }

    printf("the elements of array A now :");
    for(i=0;i<10;i++){
        printf("%d", &a[i]);
    }

    printf("the elements of array B now :");
    for(i=0;i<10;i++){
        printf("%d", &b[i]);
    }

}