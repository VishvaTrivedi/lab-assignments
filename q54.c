//READ AND ARRAY OF 10 INTEGER AND PRINT SUM OF NUMBERS
#include<stdio.h>
void main(){
    int arr[10], i, sum=0;

    printf("Enter the array elements : ");
    for(i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }

    for(i=0;i<10;i++){
        sum=sum+arr[i];
    }

    printf("sum of all array elements = %d", sum);

}