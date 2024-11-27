//READ THREE NOS. AND PRINT MAX USING CONDITIONAL (? :) OPERATOR
#include<stdio.h>
void main(){
    int num1, num2, num3, max;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);
    printf("Enter third number : ");
    scanf("%d", &num3);
    
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    printf("maximum of all three numbers = %d", max);
    
}