//SIMPLE CALCULATOR USING SWITCH-CASE
#include<stdio.h>
void main(){
    float a, b, c;
    char ch;
    
    printf("Enter the operator to perform the operation : ");
    scanf("%c", &ch);
    printf("Enter first number : ");
    scanf("%f", &a);
    printf("Enter second number : ");
    scanf("%f", &b);
    
   
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