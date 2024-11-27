//calculate area of triangle
#include<stdio.h>
int main(){
    float b, h;
    printf("enter the base of triangle : \n");
    scanf("%f", &b);
    printf("enter the height of triangle : \n");
    scanf("%f", &h);

    printf("the area of the triangle = %f", 0.5*b*h);

    return 0;
}