//convert temperature from fahrenheit to celcius
#include<stdio.h>
int main(){
    float fahrenheit;
    
    printf("Enter the temperature in fahrenheit :\n");
    scanf("%f", &fahrenheit);
    printf("The temperature in centigrade is %f", (fahrenheit-32)*100/180);

    return 0;
}