//READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO. OF POSITIVE, NEGATIVE, AND ZERO ELEMENTS
#include<stdio.h>
void main(){
    int arr[10], i, positive=0, negative=0, zero=0;

    printf("Enter array elements :");
    for(i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }

    for(i=0;i<10;i++){
        if(arr[i]>0){
            positive++;
        }
        else if(arr[i]<0){
            negative++;
        }
        else{
            zero++;
        }
    }

    printf("The number of positive elements = %d\n", positive);
    printf("The number of negative elements = %d\n", negative);
    printf("The total number of zero elements = %d", zero);
    
}