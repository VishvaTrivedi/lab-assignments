//READ TWO NOS. AND PERFORM SPECIFIC TASK (USING ARITHMETIC OPERATOR)AND THIS  PERFORM USING SWITCH-CASE
#include<stdio.h>
void main(){
    float a, b, c;
    char ch;
    
    printf("Enter first number : ");
    scanf("%f",&a);
    printf("Enter second number : ");
    scanf("%f", &b);
    printf("Enter the operator to perform the operation : ");
    scanf(" %c",&ch);
   
    switch(ch){
        case '+' : c = a+b;
        printf(" c = %f", c);
        break;
        case '-' : c = a-b;
        printf(" c = %f", c);
        break;
        case '*' : c = a*b;
        printf(" c = %f", c);
        break;
        case '/' : c = a/b;
        printf(" c = %f", c);
        break;
        default : printf("invalid operation");
        break;
    }

}