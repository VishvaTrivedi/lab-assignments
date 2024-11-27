// REVERSE AN ARRAY
#include<stdio.h>
void main(){
    int arr[10], i;

    printf("Enter the array elements : ");
    for(i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }

    printf("the array : ");
    for(i=0;i<10;i++){
        printf("%d", arr[i]);
    }

    printf("the reversed array : ");
    for(i=9;i>0;i--){
        printf("%d", arr[i]);
    }

}
