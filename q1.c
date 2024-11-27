//calculate simple imterest
#include<stdio.h>
int main(){
    float principle, rate, time;
    
    printf("Enter the value of principle : \n");
    scanf("%f", &principle);
    printf("Enter the value of rate : \n");
    scanf("%f", &rate);
    printf("Enter the value of time : \n");
    scanf("%f", &time);
    printf("simple interest = %f", (principle*rate*time)/100);
    
    return 0;
}