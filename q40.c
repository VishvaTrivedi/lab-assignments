//READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A LIST OF NUMBERS READ
#include<stdio.h>
void main(){
    int sum=0, num;

    printf("Enter numbers : \n");

    while(num>=0){
        scanf("%d", &num);
        printf("entered number is %d\n", num);
        sum=sum+num;
    }

    printf("sum = %d", sum);
}