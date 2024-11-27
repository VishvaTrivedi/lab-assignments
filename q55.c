// READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND TOTAL NO. OF EVEN ELEMENTS
#include<stdio.h>
void main(){
    int arr[10], i, even=0, odd=0;

    printf("Enter array elements :");
    for(i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }

    for(i=0;i<10;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }

    printf("The number of even elements = %d\n", even);
    printf("The number of odd elements = %d", odd);
}