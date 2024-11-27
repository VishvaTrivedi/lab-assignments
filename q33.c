//FINDOUT MAX AND MIN FROM ‘N’ NOS.
#include<stdio.h>
void main(){
    int num[100], n, max, min;
    printf("Enter the value of N :");
    scanf("%d", &n);

    printf("Enter the N elements : ");
    for(int i=0;i<n;i++){
        scanf("%d", &num[i]);
        printf("\n");
    }

    max = num[0];
    for(int i=0; i<n; i++){
        if(num[i]>max){
            max = num[i];
        }
    }

    min = num[0];
    for(int i=0; i<n; i++){
        if(num[i]<min){
            min = num[i];
        }
    }

    printf("Maximum of all elements = %d\n", max);
    printf("Minimum of all elements = %d", min);

}