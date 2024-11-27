// PRINT SUM OF ALL ODD AND EVEN NO B/W  1 TO N
#include<stdio.h>
void main(){
    int n, evensum=0, oddsum=0;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    //loop to find sum
    for(int i=0; i<=n; i++){

    //check the number is even then add to even sum else to odd sum
    if(i%2==0){
        evensum = evensum + i;
    }
    else{
        oddsum = oddsum + i;
    }
    }

    printf("The sum of even numbers = %d\n", evensum);
    printf("The sum of odd numbers = %d", oddsum);

}