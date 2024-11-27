//READ TWO NOS. AND CALCULATE POWER WITHOUT USING HEADER FILE(<MATH.H>)
#include<stdio.h>
void main(){
    int a, n, result=1;

    printf("Enter an integer : ");
    scanf("%d", &a);
    printf("Enter power : ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        result = result*a;
    }

    printf("The result = %d", result);

}